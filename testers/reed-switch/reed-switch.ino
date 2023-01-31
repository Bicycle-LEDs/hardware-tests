#define SWITCH_PIN 7

int reedSwitchLastState = 0;
void setup() {

  Serial.begin(9600);
  pinMode(SWITCH_PIN, INPUT_PULLUP);

}


void loop() {

  if (digitalRead(SWITCH_PIN) == 1 && reedSwitchLastState == 0) {

    reedSwitchLastState = 1;
    Serial.println("Reed switch active");

  } else reedSwitchLastState = 0;
}