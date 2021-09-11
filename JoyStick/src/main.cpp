#include <Arduino.h>
#include "JoyStick.h"

JoyStick joistick1(A0,A1);
JoyStick joistick2(A2,A3);
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {

  int *array=joistick1.GetValue();
  Serial.print("XValue1=");
  Serial.println(*array);

  Serial.print("YValue1=");
  Serial.println(*(array+1));
  delay(1000);

  array=joistick2.GetValue();
  Serial.print("XValue2=");
  Serial.println(*array);


  Serial.print("YValue2=");
  Serial.println(*(array+1));

  delay(1000);
}