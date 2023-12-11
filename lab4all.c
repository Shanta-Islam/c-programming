//problem7
//#include <stdio.h>
//#include <math.h>

//int main (){

//int reminder, n,result=0,sum;
//scanf("%d",&n);

 //while(n>0){
       
  //    reminder=n%10;
  //    result=result*10+reminder;
   //   sum=n/10;
      
   //}
   //if(result==n)
   //printf("palindrome");
  // else printf("not palindrome");
 //   return 0;
//}

//problem1
//#include <stdio.h>
//#include<math.h>

//int main(){

 //   int num1,num2,counter=1,hcf;
 //   scanf("%d%d",&num1,&num2);

 //   while(counter <= num1 && counter <= num2){
        
 //       if(num1 % counter==0 && num2 % counter == 0){
 //        hcf=counter;
  //       }
 //        counter++;
 //        }
 //       printf("%d",hcf);
        

    
 //   return 0;
//
//}

//problem2
//#include <stdio.h>
//#include<math.h>

//int main (){

 //   int num=101,sum=0;
 //   printf("Numbers between 100 and 200, divisible by 9:\n");

 //   while(num<200){
 //       if(num%9 == 0){
 //           printf("%d ",num);
 //           sum=sum + num;
 //       } 
 //       num++;
 //   } 
     
 //   printf("The sum :%d",sum);
 //   return 0;
//}

//problem 3 (not sure)
//#include<stdio.h>
//#include<math.h>

//int main(){

  // int num,strt=2,end=50,count;
  // printf("The prime number between 1 and 50 are : ");
 //  scanf("%d",&num);

  // for(num=strt;num<=end;num++){
  //  for(count=2;count<num;count++){

  //      if(num%count==0){
  //          break;
        
   //     }
  //      if(num==count){
  //          printf("%d",num);
  //      }
  //  }
 //  }
   
  //  return 0;
//}



//problem4
//#include<stdio.h>
//#include<math.h>
//int main(){

 //int num, i, sum=0;
 //printf("enter a number");
// scanf("%d",&num);
//printf("The positive divisor");

 //  for(i=1;i<num;i++){
 //   if(num%i==0){
 //       sum=sum+i;
        
 //       printf("  %d",i);
 //   }
  //  }
 //   printf("The sum of the divisor is : %d",sum);
   
 //    if(sum==num){
 //       printf("\n The number is a perfect number");
    
  //   }
  //   else  printf("\n The number is not a perfect number");

 //   return 0;
//}


//problem5

//#include<stdio.h>
//#include<math.h>

//int main(){

 //int i,j;
 //for(i=1;i<=5;i++){
 //   for(j=1;j<=i;j++){
  //    if((i+j)%2==0){
  //      printf("1");
  //    }
 //     else printf("0");

 //   }
 //   printf("\n");
 //}

 //   return 0;
//}



//problem8confused

//#include<stdio.h>
//#include<math.h>

//int main(){

  //  int num1,num2,i,count=1,result1,result2,LCM;
    
  //  printf("Inpute two number for LCM");
 //   scanf("%d%d",&num1,&num2);

   // for(i=1;i<=num1 && i<=num2;i++){
   //     if(i%num1==0 && i%num2==0){
  //          count=count*i;
  //          if(i%(i/num1)==0&& i%(i/num2)==0){
  //              count=count*i;
  //              LCM=count*(i/(i/num1))*(i/(i/num1));
   //             printf("%d",LCM);
   //         }
           
    //        LCM=count*(i/num1)*(i/num2);
            
  //      }
  //      printf("%d",LCM);
  //  }
 //   return 0;
//}


problem6

#include<stdio.h>
#include<math.h>

int main(){

    float i,n,x,sum=0;
    scanf("%d",&n);

   for(i=0;i<n;i++){
    
    printf("%d",pow(x,(i*2+1)));
    sum=sum+pow(x,(i*2+1));
   }
    //sum=sum+pow(x,i*2+1);
    printf("%d",sum);

    return 0;
}


