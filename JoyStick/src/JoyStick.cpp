#include "JoyStick.h"
#include "Arduino.h" 


JoyStick::JoyStick(unsigned int xPin,unsigned int yPin)
{
    pinMode(xPin,OUTPUT);
    pinMode(yPin,OUTPUT);
    this->xPin=xPin;
    this->yPin=yPin;
    for(int i=0;i<2;i++)
    {
        this->value[i]=0;
    }
}
int* JoyStick::GetValue()
{
    this->ReadJoystick();
    return this->value;
}
void JoyStick::ReadJoystick()
{
    for(int i=0;i<2;i++)
    {
        this->value[i]=0;
    }
    int xValue=analogRead(xPin);
    int yValue=analogRead(yPin);
    *this->value=xValue;
    *(this->value+1)=yValue;
    //this->value=this->value|(xValue<<sizeof(int)*__CHAR_BIT__);
    //this->value=this->value|yValue;
}
void JoyStick::ReplacePins(unsigned int xPin,unsigned int yPin)
{
    this->xPin=xPin;
    this->yPin=yPin;
    pinMode(xPin,OUTPUT);
    pinMode(yPin,OUTPUT);
}
