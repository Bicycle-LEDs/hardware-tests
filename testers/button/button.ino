#define BUTTON_PIN 5

int buttonLastState = 0;
void setup() {
  
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

}

void loop() {

  if (digitalRead(BUTTON_PIN) == 1 && buttonLastState == 0) {
    
    buttonLastState = 1;
    Serial.println("Button active");
    
  } else buttonLastState = 0;
}