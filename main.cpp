#include "mbed.h"
DigitalOut led(LED1);
DigitalIn en(D4);

PwmOut pwm(D3);
int main()
{
    int start=500, end=2400;
    while(1){
        if(en){
            led=1;
            pwm.pulsewidth_us(start);
        }
        if(!en){
            pwm.pulsewidth_us(end);
            led=0;
        }

    }
