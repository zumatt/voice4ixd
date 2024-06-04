# VOICE4IXD - MAInD 23/24
# Coded by Matteo Subet on 04/06/2024
# Code modified from https://github.com/Picovoice/porcupine/blob/master/demo/python/porcupine_demo_mic.py
# Connect an Arduino trough serial port to then trigger actions.

# Make sure to install pvrhino using the command:
# pip3 install pvporcupine
# To use here the library that you've created with picovoice, you need to download it selecting the platform macOS or Windows depending on your PC.
# Make sure to install serial using the command:
# pip3 install pyserial
import os
import pvporcupine
import pvrhino
from pvrecorder import PvRecorder
from serial import Serial
import serial.tools.list_ports
from time import sleep
from time import time

arduinoPort = None

while arduinoPort is None:
    ports = serial.tools.list_ports.comports()
    for port, desc, hwid in sorted(ports):
        if "cu.usbmodem" in port:
            arduinoPort = port
            print("The arduino port is:", arduinoPort)
    if arduinoPort is None:
        print("Is not possible to see an Arduino connected...")
        sleep(5)

ser = Serial(arduinoPort, 9600)

def arduinoWrite(x):
    ser.write(bytes(x, 'utf-8'))
    print(f"You just sended to arduino the value: '{x}'")

access_key = "ACCESSKEY"
keyword_paths = ["picovoiceCompletePythonArduino/pythonPicovoice/Hey-parrot_en_mac_v3_0_0.ppn"]
sensitivities = [0.5] * len(keyword_paths)
timeout = 5

porcupine = pvporcupine.create(
    access_key=access_key,
    keyword_paths=keyword_paths,
)

keywords = [os.path.basename(x).replace('.ppn', '').split('_')[0] for x in keyword_paths]

rhino = pvrhino.create(
    access_key=access_key,
    context_path="picovoiceCompletePythonArduino/pythonPicovoice/parrot_en_mac_v3_0_0.rhn",
    require_endpoint="false"
)

recorder = PvRecorder(device_index=-1, frame_length=max(porcupine.frame_length, rhino.frame_length))
recorder.start()

print("Starting picovoice..")
print("To turn on the wake word say 'Hey Parrot'")
print("These are the valid commands:", rhino.context_info)
print("Microphone selected:", recorder.selected_device)
print("Listening...")

while True:
    pcm = recorder.read()
    result = porcupine.process(pcm)

    if result >= 0:
        print("Detected keyword:", keywords[result])
        arduinoWrite(keywords[result])

        start_time = time()

        # Start a new loop for Rhino processing after keyword detection
        while True:
            pcm = recorder.read()
            is_finalized = rhino.process(pcm)
            if is_finalized:
                inference = rhino.get_inference()
                if inference.is_understood:
                    print('{')
                    print("  intent : '%s'" % inference.intent)
                    print('  slots : {')
                    for slot, value in inference.slots.items():
                        print("    %s : '%s'" % (slot, value))
                    print('  }')
                    print('}\n')
                    print(inference.intent)
                    arduinoWrite(inference.intent + inference.slots["object"])
                    start_time = time()
                else:
                    print("Didn't understand the command.\n")
                    arduinoWrite("NotUnderstood")
            
            if time() - start_time > timeout:
                print("Timeout reached, stopping Rhino processing.")
                # Break the inner loop when Rhino has finalized processing
                break