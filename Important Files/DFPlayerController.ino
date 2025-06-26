
#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

// Define pin connections
#define DFPLAYER_RX 10   // Arduino RX (connects to DFPlayer TX)
#define DFPLAYER_TX 11   // Arduino TX (connects to DFPlayer RX)

#define BUTTON_PLAY 2
#define BUTTON_NEXT 3
#define BUTTON_PREV 4

// Button state tracking
bool isPlaying = false;
bool lastPlayButtonState = HIGH;
bool lastNextButtonState = HIGH;
bool lastPrevButtonState = HIGH;

SoftwareSerial mySerial(DFPLAYER_RX, DFPLAYER_TX); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  // Start serial comms
  Serial.begin(9600);
  mySerial.begin(9600);
  
  // Setup buttons
  pinMode(BUTTON_PLAY, INPUT_PULLUP);
  pinMode(BUTTON_NEXT, INPUT_PULLUP);
  pinMode(BUTTON_PREV, INPUT_PULLUP);

  // Start DFPlayer
  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("Unable to begin DFPlayer Mini");
    while (true); // Freeze
  }

  Serial.println("DFPlayer Mini Online.");
  myDFPlayer.volume(25);     // Set volume (0 to 30)
  myDFPlayer.play(1);        // Start playing first track
  isPlaying = true;
}

void loop() {
  // Read button states
  bool playButton = digitalRead(BUTTON_PLAY);
  bool nextButton = digitalRead(BUTTON_NEXT);
  bool prevButton = digitalRead(BUTTON_PREV);

  // Play/Pause toggle
  if (playButton == LOW && lastPlayButtonState == HIGH) {
    delay(50); // debounce
    if (isPlaying) {
      myDFPlayer.pause();
    } else {
      myDFPlayer.start();
    }
    isPlaying = !isPlaying;
  }
  lastPlayButtonState = playButton;

  // Next track
  if (nextButton == LOW && lastNextButtonState == HIGH) {
    delay(50);
    myDFPlayer.next();
    isPlaying = true;
  }
  lastNextButtonState = nextButton;

  // Previous track
  if (prevButton == LOW && lastPrevButtonState == HIGH) {
    delay(50);
    myDFPlayer.previous();
    isPlaying = true;
  }
  lastPrevButtonState = prevButton;
}
