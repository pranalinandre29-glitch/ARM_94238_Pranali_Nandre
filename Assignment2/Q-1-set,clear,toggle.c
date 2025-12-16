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
unsigned int reg=0x2A;
reg=reg | BV(4);
binary(&reg , sizeof(reg));
printf("After set in Decimal:%d\n",reg);
printf("After set in Hex:%X\n",reg);
printf("-----------------------------------------------\n");
reg=0x2A;
reg = reg & ~BV(1);
binary(&reg , sizeof(reg));
printf("After set in Decimal:%d\n",reg);
printf("After set in Hex:%X\n",reg);
printf("-----------------------------------------------\n");
reg=0x2A;
reg = reg ^ BV(5);
binary(&reg , sizeof(reg));
printf("After set in Decimal:%d\n",reg);
printf("After set in Hex:%X\n",reg);

}
