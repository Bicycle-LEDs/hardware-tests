int reed_switch_1 = 7, reedSwitch1LastState=0,
    reed_switch_2 = 8, reedSwitch2LastState=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(reed_switch_1, INPUT_PULLUP);
  pinMode(reed_switch_2, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(reed_switch_1) == 1 && reedSwitch2LastState == 0) {
    reedSwitch1LastState=1;
    Serial.println("Reed switch 1 active");
  } else reedSwitch1LastState=0;

  if(digitalRead(reed_switch_2) == 1 && reedSwitch2LastState == 0) {
    reedSwitch2LastState=1;
    Serial.println("Reed switch 2 active");
  } else reedSwitch2LastState=0;

}