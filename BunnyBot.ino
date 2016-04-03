#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int BuzzerPin = 3;
const int NosePin = 7;
const int BellyPin = 5;

const int colorR = 50;
const int colorG = 50;
const int colorB = 50;

const int c = 1915;
const int d = 1700;
const int e = 1519;
const int f = 1432;
const int g = 1275;
const int a = 1136;
const int b = 1014;
const int C = 956;
const int D = 834;
const int E = 765;
const int F = 593;
const int G = 468;
const int A = 346;
const int B = 224;

int count;

void setup() {
  Serial.begin(9600);
  pinMode(BellyPin, INPUT);
  pinMode(NosePin, INPUT);
  pinMode(BuzzerPin, OUTPUT);

  count = 0;
  
  // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    
    lcd.setRGB(colorR, colorG, colorB);
    
    // Print a message to the LCD.
    lcd.print("Hi, I'm BunnyBot!");

    delay(1000);
} 

void lcd_disp()
{
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }

  // scroll 16 positions (display length + string length) to the left
  // to move it back to center:
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }

  // delay at the end of the full loop:
  delay(1000);
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    lcd.setCursor(0, 1);
    // print the number of seconds since reset:
    //lcd.print(millis()/1000);

    delay(100);
}

void scale() {
  uint16_t i;
  for (int i = 0; i < 3; i++)
  {
    tone(BuzzerPin, 440);
    delay(100);
    tone(BuzzerPin, 659);
    delay(100);
    tone(BuzzerPin, 698);
  }
  noTone(BuzzerPin);
}

void twinkle() {  
  uint16_t i;
  playTone(c,200);
  delay(30);
  playTone(c,200);
  delay(30);
  playTone(g,200);
  delay(30);
  playTone(g,200); 
  delay(30);
  playTone(a,200);
  delay(30);
  playTone(a,200);
  delay(30);
  playTone(g,400);
  delay(30);
  playTone(f,200);
  delay(30);
  playTone(f,200);
  delay(30);
  playTone(e,200);
  delay(30);
  playTone(e,200);
  delay(30);
  playTone(d,200);
  delay(30);
  playTone(d,200);
  delay(30);
  playTone(c,400);
  delay(30);
  
  playTone(g,200);
  delay(30);
  playTone(g,200);
  delay(30);
  playTone(f,200);
  delay(30);
  playTone(f,200); 
  delay(30);
  playTone(e,200);
  delay(30);
  playTone(e,200);
  delay(30);
  playTone(d,400);
  delay(30);
  
  playTone(g,200);
  delay(30);
  playTone(g,200);
  delay(30);
  playTone(f,200);
  delay(30);
  playTone(f,200); 
  delay(30);
  playTone(e,200);
  delay(30);
  playTone(e,200);
  delay(30);
  playTone(d,400);
  delay(30);
  
  playTone(c,200);
  delay(30);
  playTone(c,200);
  delay(30);
  playTone(g,200);
  delay(30);
  playTone(g,200); 
  delay(30);
  playTone(a,200);
  delay(30);
  playTone(a,200);
  delay(30);
  playTone(g,400);
  delay(30);
  playTone(f,200);
  delay(30);
  playTone(f,200);
  delay(30);
  playTone(e,200);
  delay(30);
  playTone(e,200);
  delay(30);
  playTone(d,200);
  delay(30);
  playTone(d,200);
  delay(30);
  playTone(c,400);
  delay(30);
  
}

void crossbuns()
{
      playTone(b, 200);
      delay(100);
      playTone(a, 200);
      delay(100);
      playTone(g, 400);
      delay(100);

      playTone(b, 200);
      delay(100);
      playTone(a, 200);
      delay(100);
      playTone(g, 400);
      delay(100);
      
      playTone(g, 100);
      delay(100);
      playTone(g, 100);
      delay(100);
      playTone(g, 100);
      delay(100);
      playTone(g, 100);
      delay(100);

      playTone(a, 100);
      delay(100);
      playTone(a, 100);
      delay(100);
      playTone(a, 100);
      delay(100);
      playTone(a, 100);
      delay(100);

      playTone(b, 200);
      delay(100);
      playTone(a, 200);
      delay(100);
      playTone(g, 400);
      delay(100);

}

void purr() {
  uint16_t i;
  for (int i = 0; i < 10; i = i + 1)
  {
    playTone(620,10);
    delay(120);
  }
}

void ode_to_joy ()
{
  uint16_t i;
  for (i = 0; i < 2; i++) {
    playTone(e,200);
    delay(100);
    playTone(e,200);
    delay(100);
    playTone(f,200);
    delay(100);
    playTone(g,200);
    delay(100);
    playTone(g,200);
    delay(100);
    playTone(f,200);
    delay(100);
    playTone(e,200);
    delay(100);
    playTone(d,200);
    delay(100);
    playTone(c,200);
    delay(100);
    playTone(c,200);
    delay(100);;
    playTone(d,200);
    delay(100);
    playTone(e,200);
    delay(100);
    if (i == 0) {
      playTone(e,200);
      delay(100);
      playTone(d,200);
      delay(100);
      playTone(d,400);
      delay(100);
    } else {
      playTone(d,200);
      delay(100);
      playTone(c,200);
      delay(100);
      playTone(c,400);
      delay(100);
    }

  }
  
}

void happy_birthday()
{
  playTone(g,100);
  delay(100);
  playTone(g,100);
  delay(100);
  playTone(a,200);
  delay(100);
  playTone(g,200);
  delay(100);
  playTone(C,200);
  delay(100);
  playTone(b,400);
  delay(100);
  
  playTone(g,100);
  delay(100);
  playTone(g,100);
  delay(100);
  playTone(a,200);
  delay(100);
  playTone(g,200);
  delay(100);
  playTone(D,200);
  delay(100);
  playTone(C,400);
  delay(100);
  
  playTone(g,100);
  delay(100);
  playTone(g,100);
  delay(100);
  playTone(G,200);
  delay(100);
  playTone(E,200);
  delay(100);
  playTone(C,200);
  delay(100);
  playTone(b,200);
  delay(100);
  playTone(a,250);
  delay(100);
  
  playTone(F,100);
  delay(100);
  playTone(F,100);
  delay(100);
  playTone(E,200);
  delay(100);
  playTone(C,200);
  delay(100);
  playTone(D,200);
  delay(100);
  playTone(C,400);
  delay(100);
}

void playTone(uint16_t tone1, uint16_t duration) {
  for (long i = 0; i < duration * 1000L; i += tone1 * 2) {
     digitalWrite(BuzzerPin, HIGH);
     delayMicroseconds(tone1);
     digitalWrite(BuzzerPin, LOW);
     delayMicroseconds(tone1);
  }
}

void loop() {
  
  int bellySensorValue = digitalRead(BellyPin);
  int noseSensorValue = digitalRead(NosePin);
  
  if(bellySensorValue == 1)
  {
      lcd.clear();
      lcd.print("Twinkle Twinkle, Little Star");
      twinkle();
      delay(3000);
      lcd.clear();
      lcd.print("Hot Cross Buns");
      crossbuns();
      delay(3000);
      lcd.clear();
      lcd.print("Happy Birthday to You!");
      happy_birthday();
      delay(3000);
      lcd.clear();
      lcd.print("Ode to Joy");
      ode_to_joy();
      lcd.clear();
      lcd.print("<3 BunnyBot");
   }
   else 
   {
      //Serial.println("Stopped");
      digitalWrite(BuzzerPin,LOW);
   }
  
  if(noseSensorValue == 1)
  {
    //Serial.println("Nose");
    lcd.clear();
    lcd.print("Purr");
    purr();
  }
  else 
  {
    //Serial.println("Stopped");
    digitalWrite(BuzzerPin,LOW);
  }

  lcd_disp();
}
