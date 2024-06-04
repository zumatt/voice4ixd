# voice4ixd
Voice Assistant 4 Interaction Design
This repository will serve as an exchange with the students of the [MAInD](http://maind.supsi.ch) during the Multimodal UX in Products from the academic year 2022/2023.

You can find more information here:
[Voice 4 IxD - Notion page](https://bit.ly/voice4ixd)

## Picovoice Rhino + Porcupine and Arduino Nano 33 BLE Sense V2
Inside the folder *picovoiceOfflineArduino* you will find a folder *PicovoiceParrot* that contains the `.ino` file and the `params.h`

To use the system you need to follow these steps:
  1. Open the `PicovoiceParrot.ino` file;
  3. Update the file inserting as many conditions as your commands from Picovoice Rhino;
  ```
  if(intent == "yourCommand"){
   //Insert here the actions to perform with Arduino
  };
  ```
  4. Upload the code to your Arduino;

## Python + Picovoice Rhino and Arduino
Inside the folder *picovoicePythonArduino* you will find:
  1. A folder called *arduinoReadingFromPython* that contains the `.ino` file for any Arduino Board;
  2. A folder called *picovoicePythonArduino* that contains the library that you can create and download from [Rhino Picovoice Console](https://console.picovoice.ai/rhn);
  3. A file called `triggerRhinoPicovoice.py` that contains the script to check intents from voice and send it to Arduino.

To use the system you need to follow these steps:
  1. Follow the comments on the `triggerRhinoPicovoice.py` file and install the libraries using pip;
  2. Open the `arduinoReadingFromPython.ino` file;
  3. Update the file inserting as many conditions as your commands from Picovoice Rhino;
  ```
  if(value == "yourCommand"){
   //Insert here the actions to perform with Arduino
  };
  ```
  4. Upload the code to your Arduino;
  5. If you encounter any conflicts is because of serial ports: if you need to see the serial port on Arduino IDE please start the python script and then open the serial monitor.
