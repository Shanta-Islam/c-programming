#include<stdio.h>
#include<math.h>

int main(){

int num,num1,high=-10000,low=10000;


while(1){
    scanf("%d",&num);
    if(num==-1){
        break;
    }
    if(num>high){
        high=num;
    }
    if(num<low){
        low=num;
    }
}
   num=high-low;
   printf("the different between high and low:%d\n",num);

    return 0;
}