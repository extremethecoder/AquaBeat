# 🎧 AquaBeats — MP3 Player in a 3D-Printed Bottle

AquaBeats is a compact, Arduino-powered MP3 player built into a stylish 3D-printed water bottle. Designed for fun, portability, and creativity, AquaBeats lets you play your favorite music on the go with tactile button controls and a built-in speaker — all for under $50.

![image](https://github.com/user-attachments/assets/1f13953f-857f-4dba-b79e-961b7db8cf4f)


---

## 🔧 Features

- 🎵 MP3 playback from MicroSD card  
- 🔘 Buttons for Play/Pause, Next, and Previous  
- 🔊 Integrated speaker inside the bottle  
- 🔋 Rechargeable via USB (TP4056 + Li-ion)  
- 🧴 3D-printed custom water bottle housing  
- 💸 Affordable — Total build under $50

---

## ⚡ Wiring Diagram

| Arduino Nano Pin | Connected To         | Notes                         |
|------------------|----------------------|-------------------------------|
| D10              | DFPlayer RX          | TX from Arduino to DFPlayer RX |
| D11              | DFPlayer TX          | RX from Arduino to DFPlayer TX |
| D2               | Play/Pause Button    | With pull-up resistor         |
| D3               | Next Button          |                               |
| D4               | Previous Button      |                               |
| 5V / GND         | DFPlayer + Buttons   | Common power                  |
| Battery + TP4056 | Nano + DFPlayer      | Recharging via USB            |
| DFPlayer SPK_1/2 | Small 3W Speaker     | Sound output                  |

📌 **Note**: Use 10kΩ resistors with buttons if using external pull-downs. If using `INPUT_PULLUP`, connect the button to GND.




---

## 💾 How to Add Music

1. Format the **MicroSD card** to **FAT32**
2. Create MP3 files and rename them in **4-digit format**:
0001.mp3
0002.mp3
0003.mp3
............. ( You can put as much as you can)

3. Place the files in the **root directory** (no folders)
4. Insert the MicroSD into the **DFPlayer Mini module**

> 🎧 Tip: You can generate MP3s from YouTube using free converters — just make sure they are legally obtained.

---

## 🧠 Arduino Code

The Nano communicates with DFPlayer Mini over `SoftwareSerial`. Button presses trigger MP3 commands.

### ✅ Setup Instructions

1. Open **Arduino IDE**
2. Install the library:
- `DFRobotDFPlayerMini` (via **Tools → Manage Libraries**)
3. Select:
- **Board**: Arduino Nano  
- **Processor**: ATmega328P (Old Bootloader)  
- **Port**: Select correct COM port
4. Upload the sketch

