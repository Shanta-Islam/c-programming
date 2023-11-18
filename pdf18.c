#include <stdio.h>
#include <math.h>
int main() {
    int i,n,t; 
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        t= pow(i , i);
        printf("%d", t);
        sum = sum + t;
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}