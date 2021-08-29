#include <Blynk.h>

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>



// You should get Auth Token in the Blynk App.

char auth[] = "AOW6LDQABWIDANM8";

// Your WiFi credentials.
// Set password to "" for open networks.

//your wifi SSID
char ssid[] = "ASUS_X00TD";
//your password
char pass[] = "9433933920";

WidgetLCD lcd(V1);

#define TRIGGERPIN D5
#define ECHOPIN  D6

void setup()
{
 // Debug console
 Serial.begin(9600);

pinMode(TRIGGERPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  Blynk.begin(auth, ssid, pass);
  

 lcd.clear(); //Use it to clear the LCD Widget
 lcd.print(0, 0, "Distance in cm"); 
}

void loop()
{

 long duration, distance;
 digitalWrite(TRIGGERPIN, LOW);  
 delayMicroseconds(2); 
  
 digitalWrite(TRIGGERPIN, HIGH);
 delayMicroseconds(10); 
  
 digitalWrite(TRIGGERPIN, LOW);
 duration = pulseIn(ECHOPIN, HIGH);
 distance = (duration/2) / 29.1;
 Serial.print(distance);
 Serial.println("Cm");


 lcd.clear();
 lcd.print(0, 0, "Distance in cm"); // use: (position X: 0-15, position Y: 0-1, "Message you want to print")

 lcd.print(7, 1, distance);
 Blynk.run();

 delay(1000);

}
