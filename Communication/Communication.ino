#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

U8G2_SSD1306_128X32_UNIVISION_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);   // Adafruit Feather ESP8266/32u4 Boards + FeatherWing OLED



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  u8g2.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  char input;
while (true){
  if (Serial.available() > 0) {             
      input = Serial.read();


      u8g2.clearBuffer();         
      u8g2.setFont(u8g2_font_ncenB08_tr);
      u8g2.drawStr(0, 10, "BMP - You did it"); 
      u8g2.sendBuffer();          
      delay(1000);
    }
}

