#include <stdio.h>

int main()
{
    int i, f = 1, num;
    float e = 1.0;

    printf("Input the number : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        f=f*i;
        e=e+((float)1/f);
    }

    printf("The value of e is: %f\n", e);
    return 0;
}