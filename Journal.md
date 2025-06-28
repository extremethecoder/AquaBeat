---
title: "AquaBeat"
author: "extremethecoder"
description: "A 3D Printed Bottle with MP3 Built-in"
created_at: "2025-06-22"
---

# Total Time Spent = ~15 Hours



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


# June 23:Configuring the Softwares and Making the preparation for!

Today, I will be configuring the softwares so we can start configuring the softwres we are going to use!
So, let's start configuring
1st, we are going to configure the SD card formatter by putting the SD card in your device's SD card slot. See the instructions below:

MicroSD Card Configuration   

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

Arduino IDE Setup (Code Upload) 

  
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

*Audio File Prep (Optional)*  


Use Audacity or Online Converter:

Convert your audio files to .mp3

Export at 128 kbps, 44.1 kHz

Rename: 0001.mp3, 0002.mp3, etc.

Copy to SD card root


**Total time spent: 2h**

# June 24:Programming the Half Arduino Code!

So, today I will be starting coding arduino code but it takes a lot of time to code, so i will be just be coding the half arduino code and I will give you soem instructions what to do or what configurations should we do in while coding:

Note: The full .ino file or the arduino code file is given in the Important Files Folder.

So, let's start:

Here is the pic of what I did today:

![Screenshot 2025-06-24 143218](https://github.com/user-attachments/assets/2284add0-e61d-48d8-aa0e-d13eabaef3ba)


And Tomorrow I will be completing the code and starting to make the README and 3D Model.


Note: That the full code will be avaible Tomorrow because my full code is remaining to be written.
Instructions: Use Arduino Cloud Editor if you don't have the app.

**Total time spent: 3h**

# June 25:Completed Arduino Code!
So  today I will be Completing the Arduino Code and Debugging it, and also I am going to put the Arduino code file in the Important Files Folder and the Main Directory, so dont forget so check it. And also I am using the Arduino Cloud Editor That can be accessed by Going to Arduino Cloud. So Let's see what have I done:

Here are some pics:

![image](https://github.com/user-attachments/assets/a3ff17b5-7834-4964-9851-2ca3febb883f)

Here are some Instructions for the code:

*You need the DFRobotDFPlayerMini library*

In Arduino IDE, go to:

Sketch → Include Library → Manage Libraries…

In the Library Manager, search for:

DFRobotDFPlayerMini

Click Install.

*Connect Your Arduino Nano*
Plug the Arduino Nano into your PC via USB cable.

Wait for drivers to install automatically (on Windows).

If using a clone Nano, you'll likely need to install the CH340 driver manually:
Download CH340 Driver

*Select Board and Port*
In the Arduino IDE:

Go to Tools → Board → Select "Arduino Nano"

Go to Tools → Processor → Choose "ATmega328P (Old Bootloader)" (for most clones)

Go to Tools → Port → Select the COM port your Nano appears on

*The Code*
Open a new sketch (File → New)

Paste the full Arduino code I gave you in the.

Save the file with a project name like AquaBeats.ino

*Upload Code*
Click the checkmark (✓) to verify the code.

Click the arrow (→) to upload the code.

If everything is correct, it will say:

Done uploading.
and your Nano will start running the program immediately.

**Total time spent: 4h**

# June 26:Writing the README!

2.00 PM
So, today I will be writing the README for my project and also giving all the features and everything else in it, so pls check it!

README is important for the project so that we can see evrything of the project it's features and everything, and I will be writing the whole README  so that it covers the whole project.

3.00 PM
Wrote and finalized the README.md file for the AquaBeats MP3 Player GitHub repository.

Documented all core features of the project, including hardware components, wiring diagram, Arduino code structure, 3D modeling instructions, and how to load music files onto the MicroSD card.

Created a clear, professional layout for the README with sections like Features, Materials, Wiring, Upload Instructions, and Future Upgrades.

Ensured the README is easy to follow for beginners and showcases the project's functionality in a clear and polished way.

![image](https://github.com/user-attachments/assets/426c9334-37c5-4a50-82d1-926c41a5fb00)

**Total time spent: 1h**

# June 27:Designing 3D Model!
Today, I designed the 3D model of the AquaBeats MP3 player bottle using Blender & FreeCAD. The model consists of two main sections:

Upper Section: Represents the main water bottle body.

Lower Section: A separate electronics compartment housing the Arduino Nano, DFPlayer Mini, speaker, battery, and buttons.

I also added circular speaker grill holes at the base using the Boolean Modifier, and positioned the button placements for Play, Next, and Previous functions. The model is fully 3D-printable, designed with functional and aesthetic considerations in mind, and ready for slicing and printing.

So first I have made Bottle Cover The Side one and now I am making the small parts like the electronic compartment the Cap, etc.

Here are some pics of what I am making:

![image](https://github.com/user-attachments/assets/01b96235-8f81-488e-952d-5f4e67164acf)

Next, I have made all the Components, and here are some pics of my project

![Screenshot 2025-06-27 154419](https://github.com/user-attachments/assets/ba889c8e-34af-45c2-9e0e-b2a81e7d92cd)


![image](https://github.com/user-attachments/assets/0c86a57c-ca43-45ab-b208-0084ed7779ba)


![image](https://github.com/user-attachments/assets/33f71b02-d797-4ec5-8367-107ad2f20cee)


**Total time spent: 4h**


