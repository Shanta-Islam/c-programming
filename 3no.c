#include <stdio.h>
int main()
{

    int var1;
    float var2;
    char var3;

    scanf("%d", &var1);
    printf("The integer value is :%d\n", var1);
    scanf("%f", &var2);
    printf("The float value is:%f\n", var2);
    scanf(" %c", &var3);
    printf("The character value is:%c", var3);

    return 0;
}