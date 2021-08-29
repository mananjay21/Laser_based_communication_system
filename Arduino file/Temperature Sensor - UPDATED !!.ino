#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>


#define DHTPIN 8

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() { 
  lcd.begin(16, 2);
  dht.begin();
  
  // Print a message to the LCD.
  //lcd.print("Temp:  Humidity:");
  lcd.print("Temperature(C) :");
}

void loop() {
  delay(500);  
  lcd.setCursor(0, 1);
  // read humidity
  float h = dht.readHumidity();
  //read temperature in Fahrenheit
  float f = dht.readTemperature();

  if (isnan(h) || isnan(f)) {
    lcd.print("WAIT");
    return;
  }

  lcd.print(f);
  lcd.setCursor(7,1);
  //lcd.print(h);  
}
