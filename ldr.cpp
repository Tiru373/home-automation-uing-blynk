#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{/*initialize/configure gpio3 of arduino uno as o/p pin*/
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}

unsigned int input_Value=0;

void brightness_control(void)
{
  /*read the LDR values*/
  input_Value = analogRead(LDR_SENSOR );

  /*reverse map from 0 to 1023 to 255 to 0*/
   input_Value=(1023-input_Value)/4;

 /*write values to the LED*/  
  analogWrite (GARDEN_LIGHT , input_Value);

  delay(100);
 
}
