#include "wiringPi.h"
#include <stdio.h>

#define BUZZER 5

int main(int argc, char *argv[])  
{
	int i = 0;

	if(wiringPiSetup() < 0){
		printf("wiringPi setup failed !\n");
		return -1;
	}

	pinMode(BUZZER, OUTPUT);

	for(i = 0; i < 15; i++){
		digitalWrite(BUZZER, 0);
		delay(200);
		digitalWrite(BUZZER, 1);
		delay(200);
	}

	return(0);  
}  

