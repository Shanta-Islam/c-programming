#include<stdio.h>
#include<math.h>

int main(){
    int base,exponent,result=1,counter=1;
    scanf("%d%d",&base,&exponent);

    while(counter<=exponent){
     result=result*base;
     counter++;
    }
    printf("%d",result);


    return 0;
}