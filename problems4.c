 #include <stdio.h>
 int main() {
     int i,num,flag=0;
     
   scanf("%d",&num);

   for (i=2; i<=num; i++) {
             if(num %i == 0){
           flag=1;
           break;
     } 
   }
      if(flag == 1)
    printf("not prime");
       
      else
         printf(" prime");
    return 0;
}