#include<stdio.h>
int main()
{
unsigned int reg=0xABCD;
int value=0;
value = (reg >> 0) & 0x0000000F;
printf("MAX Value:%X\n",value);
reg=0xABCD;

value = (reg >> 12) & 0x0000000F;
printf("MIN Value:%X",value);
}
