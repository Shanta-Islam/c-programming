#include <stdio.h>

int main()
{
    int i = 1, mul = 1, num;

    printf("Input the number : ");
    scanf("%d", &num);

    while (i <= num)
    {
        mul = mul * i;
        i++;
    }

    printf("The Factorial of %d is: %d\n", num, mul);
    return 0;
}