---
title: "AquaBeat"
author: "extremethecoder"
description: "A 3D Printed Bottle with MP3 Built-in"
created_at: "2025-06-22"
---

# June 22: Got the Parts and their cost along with the software!

Today, I am searching for the parts from the vendors that Hack Club gave!       Because they are the body parts of my project.
And also searching for the softwares needed for the project

 
So, I have sucessfully made a list of softwares and the hardware

So here is the list of hardware I have chosen :

1.Arduino Nano

2.DFPlayer Mini

3.MicroSD Card (8–32GB)

4.Speaker (3W 4Ω)

5.Push Buttons

6.TP4056 Charging Module

7.Li-ion Battery (3.7V)

8.Slide Switch (optional)

9.Resistors (1kΩ)

10.Wires & Header Pins

11.3D Printed Parts(Files will be given in Important Files Folder)


![photo-collage png](https://github.com/user-attachments/assets/0a576225-d71d-4058-a896-bc52cb165d02)

# Above are the Parts, next we have software:
1.Arduino IDE (for Programming Nano)

![download](https://github.com/user-attachments/assets/6b0d1cd1-ee8b-4803-8dfe-79606e5e5457)

2.SD Card Formatter

![download](https://github.com/user-attachments/assets/6c0a9ac5-5e2b-4f4d-b47f-1bbb3dfbf59d)

3.Blender (for 3D Design)

![download](https://github.com/user-attachments/assets/25c9c3b4-ac18-43c1-93b1-f27dcdae9ded)


**Total time spent: 4h**


# June 22:Configuring the Softwares and Making the preparation for!

Today, I will be configuring the softwares so we can start configuring the softwres we are going to use!
So, let's start configuring
1st, we are going to configure the SD card formatter by putting the SD card in your device's SD card slot. See the instructions below:

MicroSD Card Configuration   ![download](https://github.com/user-attachments/assets/3e3ea0b8-fb23-4e1d-b429-b42d68a4f8b4)

✅ Step 1: Format the SD Card
Use FAT32 format

Use the built-in OS tool 

✅ Step 2: Prepare Music Files
File format: .mp3 (or .wav)

File naming format:

```
0001.mp3  
0002.mp3  
0003.mp3
```  
Copy files to the root folder (not in subfolders)

✅ Step 3: Insert the SD Card into the DFPlayer Mini
Slide it in gently until it clicks

Next we have Arduino IDE Setup:

Arduino IDE Setup (Code Upload) ![download](https://github.com/user-attachments/assets/ba2fe042-34ed-4391-8701-edda769ccf6b)

  
✅ Step 1: Install Arduino IDE
Download: https://www.arduino.cc/en/software

Install and launch it.

✅ Step 2: Select Arduino Nano
Go to: Tools → Board → Arduino Nano

Go to: Tools → Processor → ATmega328P (Old Bootloader) (if your Nano uses that)

✅ Step 3: Install DFPlayer Library
Go to: Sketch → Include Library → Manage Libraries…

Search: DFRobotDFPlayerMini

Click Install

✅ Step 4: Plug in Arduino Nano
Connect via USB cable

Go to Tools → Port and select the correct COM port

✅ Step 5: Load Code
Paste your AquaBeats code or use the provided .ino file

Click ✅ Verify → Then 🔼 Upload

Last, configuring the Audio File Making compatible to DF Player

*Audio File Prep (Optional)*  ![download](https://github.com/user-attachments/assets/9348a9a6-a4c9-46c7-969d-3c0d3f3793d5)


Use Audacity or Online Converter:

Convert your audio files to .mp3

Export at 128 kbps, 44.1 kHz

Rename: 0001.mp3, 0002.mp3, etc.

Copy to SD card root


**Total time spent: 2h**
