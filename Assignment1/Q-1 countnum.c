
#include <stdio.h>

<<<<<<< HEAD:Assignment1/Q-1 countnum.c
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

=======
int main() 
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
>>>>>>> 7f004730173132b26bc260d28734238bbe0543e4:Assignment1/countnum.c
int countOnes(int num) {
    int count = 0;
    while (num != 0) 
    {
        if (num & 1)
        {   // check last bit
            count++;
        }
        num = num >> 1;  // shift right
    }
    return count;
}
    printf("Number of 1 bits = %d\n", countOnes(n));
    return 0;
}
