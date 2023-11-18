#include <stdio.h>
int main()
{
    int n, i;
    int sum =0;
    scanf("%d", &n);
    for(i =1 ; i<=n; i=i*2){
        if(i<=n/2){
            printf("%d+",i);
        }
        else {
            printf("%d=", i);
            
        }
        sum = sum + i;
        
    }
    printf("%d", sum);
    return 0;
}