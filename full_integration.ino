// Matthew O'Connor
// ECE 484 Pinball Scoring
#include <NewPing.h>
#include <Wire.h>           // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for the LCD

// Initialize the LCD to be at I2C address 0x27 with 16 columns and 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int trigPin1 = 10;
const int echoPin1 = 9;
const int trigPin2 = 13;
const int echoPin2 = 12;
const int touchPin = 4;

int count = 0;

NewPing sonar1(trigPin1, echoPin1, 300); // 300 cm max distance
NewPing sonar2(trigPin2, echoPin2, 300);


void setup() {
  // put your setup code here, to run once:
  pinMode(touchPin, INPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);


  Serial.begin(9600);
  lcd.init();
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("Player 1: ");
  lcd.print(count);

  int distanceClose = sonar1.ping_cm();
  int distanceFar = sonar2.ping_cm();
  int touchValue = digitalRead(touchPin);
  char buffer[30];

  if (touchValue == HIGH) {
    count++;

    while(touchValue == 1){ touchValue = digitalRead(touchPin); }
  }
  
  if (distanceClose < 30 && distanceFar >= 30) {
    count++;
    while(1){
      if (distanceClose >= 31 || distanceFar < 30) {
        break;
      }
      
      distanceClose = sonar1.ping_cm();
      distanceFar = sonar2.ping_cm();
    }
  } else if (distanceFar < 30) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Game Over");
    lcd.setCursor(0, 1);
    sprintf(buffer, "Final Score: %d", count);
    lcd.print(buffer);
    while(1);
  } else {
    Serial.println("No Interference");
  }

  delay(100);

}
