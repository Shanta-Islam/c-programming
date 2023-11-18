#include<stdio.h>
int main () {

int num;
scanf("%d",&num);

if (num>=0 && num<=60 ){
   printf("Fail");
}
else if (num>=61 && num<=70){
    printf("C");
}
else if (num>=71 && num<=80){
    printf("B");
}
else if (num>=81 && num<=90){
    printf("A");}
else if (num>=91 && num<=100){
        printf("A+");
}
else{
    printf("wrong Input");
}

 return 0;

}