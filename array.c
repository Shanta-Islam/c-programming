//random problem 1

//#include<stdio.h>
//#include<math.h>

//int main(){

//int a[10],i,sum=0;

//for(i=0;i<10;i++){
//    scanf("%d",&a[i]);
//}

//for(i=0;i<10;i++){
//    sum=sum +a[i];
   
//}
//printf("The sum of all integer %d:\n",sum);
//    return 0;
//}


//random problem 2

//#include<stdio.h>
//#include<math.h>

//int main (){

// int a[5]={-99,45,234,-654,371};
 //int max=a[0],i;

 //for(i=1;i<5;i++){
 //   if(a[i]>max);
 //    max=a[i];
// }
// printf("%d",max);


 //   return 0;
//}

//randomproblem3
//#include<stdio.h>
//#include<math.h>

//int main (){

 //int A[5],B[5],AB[5];
 //int i;

//printf("Enter the value of A:");
// for(i=0;i<5;i++){
//    scanf("%d",&A[i]);
 //}

 //printf("Enter the value of B:");
 //for(i=0;i<5;i++){
 //   scanf("%d",&B[i]);
 //}


 //for(i=0;i<5;i++){
  //  AB[i]=A[i]+B[i];
 //}

 //printf("The sum of value A and value B:");
//for(i=0;i<5;i++){
// printf("%d ",AB[i]);}

 //return 0;
 //   }

//randomproblem4
// #include<stdio.h>
//#include<math.h>

//int main (){
    
   // int a[5];
  //  int i,sumodd=0,sumeven=0;

  //  for(i=0;i<5;i++){
  //   scanf("%d",&a[i]);}
     
  //   printf("Values of array: ");
   //  for(i=0;i<5;i++){
  //   printf("%d ",a[i]);

  //   if(a[i]%2==0)
  //      sumeven=sumeven+ a[i];
     
  //   else sumodd=sumodd+ a[i];
  //   }
    
  //  printf("sum of odd:%d \n",sumodd);
   // printf("sum of even: %d",sumeven);

 //   return 0;
//}


//random problem5
//#include<stdio.h>

//int main(){

 //   int a[10];
 //    for(int i=0;i<10;i++){
 //    scanf("%d",&a[i]);
 // }

  //for(int i=0;i<10;i++){
  //   printf("%d",a[i]);
 // }

 //   return 0;
//}

//random prob 6
//#include<stdio.h>

//int main(){

 //   int a[3];
//  for(int i=0; i<3;i++)  {
//    scanf("%d",&a[i]);
 // }

//for(int i=0; i<3;i++)  {
 //   printf("%d/n ",a[i]);}


//for(int i=2; i>=0;i--)  {
//    printf("%d",a[i]);
//  }
//return 0;
//}


//lab5(2)vul(brain stroming)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int num[50],i;

  srand(time(0));
  
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        a[i]=rand()%50+1;
    }
    for( i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

  while(1){
    for(i=1;i<=50;i++){
    scanf("%d",&num[i]);
    if(num[i]==-1){
      break;
    }

    if(num[i]<=50){
      printf("the num is present");
    }
    else printf("the num is not present");}
  }

  return 0;
}
