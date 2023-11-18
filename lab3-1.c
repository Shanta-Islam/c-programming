#include<stdio.h>
#include<math.h>
int main(){
 
  double num1,num2,result;
  char op;

  printf("enter an operator:\n");
  scanf("%c",&op);
  printf("enter two number:\n");
  scanf("%lf%lf",&num1,&num2);
  

   switch(op) {
   case'+':
    result=num1+num2;
    printf("%lf",result);
    break; 

    case'-':
    result=num1-num2;
    printf("%lf",result);
    break;

    case'*':
    result=num1*num2;
    printf("%lf",result);
    break;

    case'/':
    result=num1/num2;
    if (num2==0){
        printf("not possible");
    }
    else{
        printf("%lf",result);
    }
    break;

    case'%':
    result= (int)num1%(int)num2;
    printf("%lf",result);
    break;

    default:
    printf("invalid operator"); 


   }





return 0;
}