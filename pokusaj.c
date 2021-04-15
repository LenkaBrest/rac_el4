/*Povezati izlaz DAC-a sa AIN2 (koji je slobodan)
* očitavati trimer potenciometar koji je na AIN3
* upisati tu vrednost u DAC,
* očitati DAC preko AIN2
* DAC izlaz je validan do oko ~220
*/
#include <wiringPiI2C.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <stdio.h>
const char PCF8591 = 0x48; // adresa
int fd, reg=0;
int main() {
 if (wiringPiSetup () == -1) exit (1);
 fd = wiringPiI2CSetup(PCF8591);
 while (1) {

 if(reg<250)
	reg++;
 else
	reg = 0;

printf("%d\n", reg);
wiringPiI2CWriteReg8(fd, PCF8591 + 4, reg) ;
delay(100);
 }
return 0;
}
