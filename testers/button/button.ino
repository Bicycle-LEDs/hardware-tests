int button = 6, buttonLastState=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(button, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(button) == 1 && buttonLastState == 0) {
    buttonLastState=1;
    Serial.println("Button active");
  } else buttonLastState=0;
  
}