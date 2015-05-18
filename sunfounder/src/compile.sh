#!/bin/bash

arm-linux-gnueabihf-gcc led.c -I../wiringPi/wiringPi -L../wiringPi/wiringPi -lwiringPi -lpthread -o led
arm-linux-gnueabihf-gcc btnCtrlLed.c -I../wiringPi/wiringPi -L../wiringPi/wiringPi -lwiringPi -lpthread -o btnCtrlLed
arm-linux-gnueabihf-gcc rgb.c -I../wiringPi/wiringPi -L../wiringPi/wiringPi -lwiringPi -lpthread -o rgb
arm-linux-gnueabihf-gcc buzzer.c -I../wiringPi/wiringPi -L../wiringPi/wiringPi -lwiringPi -lpthread -o buzzer
arm-linux-gnueabihf-gcc analogRead.c -I../wiringPi/wiringPi -L../wiringPi/wiringPi -lwiringPi -lpthread -o analogRead
