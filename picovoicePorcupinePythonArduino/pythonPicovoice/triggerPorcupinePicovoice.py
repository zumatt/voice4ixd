# VOICE4IXD - MAInD 23/24
# Coded by Matteo Subet on 04/06/2024
# Code modified from https://github.com/Picovoice/porcupine/blob/master/demo/python/porcupine_demo_mic.py
# Connect an Arduino trough serial port to then trigger actions.

# Make sure to install pvrhino using the command:
# pip3 install pvporcupine
# To use here the library that you've created with picovoice, you need to download it selecting the platform macOS or Windows depending on your PC.
# Make sure to install serial using the command:
# pip3 install pyserial

import pvporcupine
from pvrecorder import PvRecorder
from serial import Serial
import serial.tools.list_ports
from time import sleep
import os

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

porcupine = None
recorder = None
# Write here the AccessKey obtained from Picovoice Console (https://console.picovoice.ai/)
access_key="ACCESSKEY"
# Insert here the path of your .rhn file, downloaded from Picovoice
keyword_paths = ["picovoicePorcupinePythonArduino/pythonPicovoice/Hey-parrot_en_mac_v3_0_0.ppn"]

sensitivities = [0.5] * len(keyword_paths)

porcupine = pvporcupine.create(
    access_key=access_key,
    keyword_paths=keyword_paths,
    )

keywords = list()
for x in keyword_paths:
    keyword_phrase_part = os.path.basename(x).replace('.ppn', '').split('_')
    if len(keyword_phrase_part) > 6:
        keywords.append(' '.join(keyword_phrase_part[0:-6]))
    else:
        keywords.append(keyword_phrase_part[0])

recorder = PvRecorder(
        frame_length=porcupine.frame_length,
        device_index=1)
recorder.start()

print("Starting picovoice..")
print()
print("To turn on the wake word say 'Hey Parrot'")
print()
print("Microphone selected: %s" % recorder.selected_device)
print("Listening...")
print()

while True:
    pcm = recorder.read()
    result = porcupine.process(pcm)

    if result >= 0:
        print("Detected keyword: " + keywords[result])
        arduinoWrite(keywords[result])