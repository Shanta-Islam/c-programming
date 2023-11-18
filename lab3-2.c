#include<stdio.h>
#include<math.h>

int main(){
   
   int number,reminder,sum=0;
   printf("enter a number:\n");
   scanf("%d",&number);

    while(number>0){
        reminder=number%10;
        sum=sum+reminder;
        number=number/10;
    }
    printf("%d",sum);
    return 0;
}