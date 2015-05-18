#include "wiringPi.h"
#include <stdio.h>
#include <stdlib.h>

#define LED 0   //wiringPi GPIO0

int main(int argc, char *argv[])  
{
	int ledStatus = 0;

	if(wiringPiSetup() < 0){
		printf("wiringPi setup failed !\n");
		return -1;
	}
	
	printf("Usage : no further arguments = toggle, 1 = ON, 0 = OFF.\n");

	if(argc > 1){
		pinMode(LED, OUTPUT);
		if(0 == atoi(argv[1])){
			digitalWrite(LED, LOW);
			printf("...led off\n");
		}else{
			digitalWrite(LED, HIGH);
			printf("led on...\n");
		}
	}else{
		pinMode(LED, INPUT);
		ledStatus = digitalRead(LED);
		pinMode(LED, OUTPUT);
		digitalWrite(LED, !ledStatus);		
		printf("Led is toggled !\n");
	}
	
	return(0);  
}  

