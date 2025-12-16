#include<stdio.h>
#define BV(n)(1<<(n))
int main()
{
unsigned int reg=0x08;
if(reg & BV(3))
{
printf("Bit 3 is SET",reg);
}
else
{
printf("Bit 3 is CLEAR",reg);
}
}
