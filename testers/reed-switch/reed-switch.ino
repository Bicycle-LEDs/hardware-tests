int reed_switch = 7, reedSwitchLastState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(reed_switch, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(reed_switch) == 1 && reedSwitchLastState == 0) {
    reedSwitchLastState = 1;
    Serial.println("Reed switch active");
  } else reedSwitchLastState = 0;
}