#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<wiringPi.h>
#include<lcd.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/fcntl.h>


const int RS = 3;
const int EN = 14;
const int D0 = 4;
const int D1 = 12;
const int D2 = 13;
const int D3 = 6;
const char PCF8591 = 0x48;

int main()
{
	int lcd_h, fd;
	if(wiringPiSetup() == -1)
		exit(1);
	lcd_h = lcdInit(2,16,4,RS,EN,D0,D1,D2,D3,D0,D1,D2,D3);
	fd = wiringPII2CSetup(PCF8591);
	while(1)
	{
		
	}	
	return 0;
}
