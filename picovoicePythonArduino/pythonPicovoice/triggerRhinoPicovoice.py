# VOICE4IXD - MAInD 23/24
# Coded by Matteo Subet on 04/06/2024 (from last year edition)
# Code modified from https://github.com/Picovoice/rhino/blob/master/demo/python/rhino_demo_mic.py
# Use python to bypass the wakeWord (Porcupine),
# Connect an Arduino trough serial port to then trigger actions.

# Make sure to install pvrhino using the command:
# pip3 install pvrhino
# To use here the library that you've created with picovoice, you need to download it selecting the platform macOS or Windows depending on your PC.
# Make sure to install serial using the command:
# pip3 install pyserial

import pvrhino
from pvrecorder import PvRecorder
from serial import Serial
import serial.tools.list_ports
from time import sleep

arduinoPort = None

while(arduinoPort == None):
    ports = serial.tools.list_ports.comports()
    for port, desc, hwid in sorted(ports):
        if (port.__contains__("cu.usbmodem")):
            arduinoPort = port
            print("The arduino port is:")
            print(arduinoPort)
    if arduinoPort == None:
        print("Is not possible to see an Arduino connected...")
        sleep(5)
    
ser = Serial(arduinoPort,9600)

def arduinoWrite(x):
    ser.write(bytes(x, 'utf-8'))
    print("You just sended to arduino the value: '" + x + "'")

rhino = None
recorder = None

rhino = pvrhino.create(
    # Write here the AccessKey obtained from Picovoice Console (https://console.picovoice.ai/)
    access_key="ACCESSKEY",
    # Insert here the path of your .rhn file, downloaded from Picovoice
    context_path="picovoicePythonArduino/pythonPicovoice/parrot_en_mac_v3_0_0.rhn",
    # If set to `True`, Rhino requires an endpoint (a chunk of silence) after the spoken command. If set to "
    #         "`False`, Rhino tries to detect silence, but if it cannot, it still will provide inference regardless. "
    #         "Set to `False` only if operating in an environment with overlapping speech (e.g. people talking in the "
    #         "background).
    require_endpoint="false"
    )

recorder = PvRecorder(device_index=-1, frame_length=rhino.frame_length)
recorder.start()

print("Starting picovoice..")
print()
print("These are the valid commands:")
print(rhino.context_info)
print()

print("Microphone selected: %s" % recorder.selected_device)
print("Listening...")
print()

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
            
        else:
            # Insert here the conditions to trigger Arduino if the system will not recognise the command
            print("Didn't understand the command.\n")
            arduinoWrite("NotUnderstood")