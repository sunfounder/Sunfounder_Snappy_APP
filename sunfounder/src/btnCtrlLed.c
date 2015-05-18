#include "wiringPi.h"
#include <stdio.h>

#define LED 0
#define BTN 1

int main(int argc, char *argv[])  
{
	int ledStatus = 0;

	if(wiringPiSetup() < 0){
		printf("wiringPi setup failed !\n");
		return -1;
	}

	pinMode(LED, OUTPUT);
	pinMode(BTN, INPUT);

	pullUpDnControl(BTN, PUD_UP);

	while(1){
		if(0 == digitalRead(BTN)){
			ledStatus = !ledStatus;
			digitalWrite(LED, ledStatus);
		}
	}

	return(0);  
}  

