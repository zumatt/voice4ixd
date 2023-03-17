# voice4ixd
Voice Assistant 4 Interaction Design

[Voice 4 IxD - Notion page](bit.ly/voice4ixd)

## Python + Picovoice and Arduino
Inside the folder *picovoicePythonArduino* you will find:
  1. A folder called *arduinoReadingFromPython* that contains the `.ino` file for the Arduino nano BLE 33 sense v2 board;
  2. A folder called *picovoicePythonLib* that contains the library that you can download from[Rhino Picovoice](https://console.picovoice.ai/rhn);
  3. A file called `triggerRhinoPicovoice.py` that contains the script to check intents from voice.

To use the system you need to follow these steps:
  1. Follow the comments on the `triggerRhinoPicovoice.py` file and install the libraries using pip;
  2. Create your intent conditions;
  ```
  if inference.intent == "yourIntent":
    arduinoWrite("yourCommand")
  ```
  3. Update the .ino file inserting as many conditions as your commands from python;
  ```
  if(value == "yourCommand"){
   //Insert here the actions to perform with Arduino
  };
  ```
  4. Upload the code to your Arduino Nano 33 BLE sense v2;
  5. Close Arduino IDE to avoid serial port conflict.
