#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{/*configuring heater pin(pin5) n cooler pin(pin4) as o/p*/
    pinMode(HEATER,OUTPUT);
    pinMode(COOLER,OUTPUT);
/*initially turning off the heater n cooler*/
    digitalWrite(HEATER,LOW);
    digitalWrite(COOLER,LOW);
    
}

float read_temperature(void)
{// put your main code here, to run repeatedly:
float temperature;

  //reading the analog output voltage from temperature sensor and converting it to deg cel (10mv-> 1deg cel)
  temperature =(((analogRead(A0) *(float)5/ 1024)) /(float) 0.01);

  return temperature;
   
   
}

void cooler_control(bool control)
{
   digitalWrite(COOLER,control);
}
void heater_control(bool control)
{
    digitalWrite(HEATER,control);
}
