#include<stdio.h>
#define BV(n)(1<<(n))
int binary(void *vp, int size)
{
    int i;
    for(i = size - 1; i >= 0; i--)
    {
        unsigned char mask=0x80;
        while(mask)
        {
               if( *((char *)vp + i) & mask )
                printf("1");
            else
                printf("0");
            mask >>= 1;
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}
int main()
{
unsigned int reg=5;
int value=0;
binary(&reg , sizeof(reg));
value=reg<<2;
printf(" Left shift the value by 2 positions in Decimal:%d\n",value);
printf(" Left shift the value by 2 positions in Hex:%x\n",value);
printf("\n------------------------------------------------------------------\n\n");
reg=5;
value=0;
binary(&reg , sizeof(reg));
value=reg>>1;
printf(" Right shift the original value by 1 position in Decimal:%d\n",value);
printf(" Right shift the original value by 1 position in Hex:%x\n",value);

}

