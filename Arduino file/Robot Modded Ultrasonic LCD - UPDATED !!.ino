#include <LiquidCrystal.h>

LiquidCrystal lcd(11, 10, 9, 7, 6, 5, 4);

int pingPin = 13;
int inPin = 12;

void setup() {
lcd.begin(16, 2);
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("---D.M.T.K.T---");
lcd.setCursor(0, 1);
lcd.print("  Ver : MK-II");
delay(2500);
}



void loop(){

lcd.clear();
lcd.setCursor(0, 0);
lcd.print("    READING");
lcd.setCursor(0, 1);
lcd.print("  ENVIRONMENT");
delay(1000);
  
long duration, inches, cm;

pinMode(pingPin, OUTPUT);
digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(10);
digitalWrite(pingPin, LOW);

pinMode(inPin, INPUT);
duration = pulseIn(inPin, HIGH);


cm = microsecondsToCentimeters(duration);

if (cm > 400){
lcd.clear();
lcd.setCursor(0,0);
lcd.print("$$$$ DANGER $$$$");
lcd.setCursor(0,1);
lcd.print("$$$$ BEWARE $$$$");
}

else {

lcd.clear();
lcd.setCursor(0, 0);
lcd.print("OBJECT IS ---- ");
lcd.setCursor(0, 1);
lcd.print(cm);
lcd.print("CM AHEAD OF ME");
}

delay(3000);

}
long microsecondsToInches(long microseconds)
{
return microseconds / 74 / 2;
}
long microsecondsToCentimeters(long microseconds)
{
return microseconds / 29 / 2;
}
