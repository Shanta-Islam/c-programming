// #include <stdio.h>
// int main(){

// int i,sum=0,num;
//   scanf("%d", &num);
//     if(num%1 ==0 && num%num ==0){
//         printf("prime number");
//     }
//     else printf("not prime num");
    
//         return 0;

// }        

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(){
//     srand(time(0));
//     int i,size,input,found;
//     scanf("%d",&size);
//     int a[size];
//     for(int i=0;i<size;i++)
//     {
//         a[i]=rand()%50+1;
//     }
//     for( i=0;i<size;i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     while(1)
//     {
//         scanf("%d",&input);
//         found=0;
//         for(i=0;i<size;i++)
//         {


//         if(input==a[i])
//         {
//             found=1;
//             break;
//         }
//         }

//     if(found==1)
//         printf("found");
//     else
//         printf("nott");
//     }

//     return 0;





// }



//correctlab5(2)
// #include <stdio.h>
// #include<time.h>
// #include<stdlib.h>

// int main()
// {
    
    
//     // part 1 : Generating 50 random numbers
    
//   int random[50]; // array for random numbers
//   srand(time(NULL));
//   for(int h=0; h<50; h++){
      
//       random[h]= rand()%50+1; // 50 size er array er sob ghore ekta kore random number
//   }
  
  
  
//   // part 2 : Ekhon user input nibo
  
//   int inp[1000];
//   for(int i=0; i<=1000;i++){
      
//       scanf("%d",&inp[i]); //scan korlam
      
//       if(inp[i]==-1){   //-1 pailei break
//           break;
//       }
      
//       //ebar scan kora number milay dekhbo random arraay te ase kina
      
//       for(int k=0; k<50; k++){
          
//         // mil pailei print  
//           if(random[k]==inp[i]){
            
//             printf("The number is present\n");  
//             break;
//           }
//       }
//  }
//    return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int main(){

//   int num,difference,high=-10000,low=10000;
  

//   while(1){
//     scanf("%d",&num);
//      if(num==-1){
//         break;
//      }
//     if(num>high){
//         high=num;
//     }
//     if(num<low){
//         low=num;
//     }
//     difference=high-low;}
//     printf("%d",difference);
  


//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// int main(){
// int num,i,j;
// scanf("%d",&num);

// for(i=1;i<=num;i++){//row
//     for(j=1;j<=num;j++){//column
//         if(i==1 || i==num ||j==1 || j==num){
//             printf("*");
//         }
//         else printf(" ");
//     }
//     printf("\n");
// }

//    return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main(){

// int base,exponent,result=1,count=1;
//    printf("enter base as an integer:");
//    scanf("%d\n",&base);
//    printf("enter exponent as an integer:");
//    scanf("%d\n",&exponent);

//   while(count<=exponent){
//   result=result*base;
//   count++;
//   }
//   printf("%d",result);

//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main(){

// int num,i=1,result=1;
//  scanf("%d",&num);


// while(i<=num){
//     result=result*i;
//     i++;
// }
// printf("%d",result);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//    int num,num1,num2,HCF=0;

// scanf("%d%d",&num1,&num2);
// for(num=1;num<=num1 && num<=num2;num++){
//     if(num1%num==0 && num2%num==0){
//         HCF=num;
//     }
  
// }
// printf("%d",HCF);
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main(){

// int num,sum=0;


// for(num=101;num<200;num++){
//     if(num%9==0){
//         printf("%d  \n",num);
//         sum=sum+num;
//     }
    
// }
  
//   printf("sum of the number :%d",sum);

//     return 0;
// }

// #include <stdio.h> vul
// #include <math.h>
// int main(){

// int num,strt=2,end=50,i;

// scanf("%d",&num);

// for(num=strt;num<=end;num++){
//     for(i=2;i<num;i++){
//         if(num%i==0){
//             break;
//         }
//         if(num==i){
//             printf("%d",num);
//         }
//     }
// }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//    int low, high, i, flag;
//    printf("Enter two numbers(intervals): ");
//    low=1,high=50;//scanf("%d %d", &low, &high);
//    printf("Prime numbers between %d and %d are: ", low, high);
//    // iteration until low is not equal to high
//    while (low < high) {
//       flag = 0;
//     // ignore numbers less than 2
//       if (low <= 1) {
//          ++low;
//          continue;
//       }
//     // if low is a non-prime number, flag will be 1
//       for (i = 2; i <= low / 2; ++i) {
//          if (low % i == 0) {
//             flag = 1;
//             break;
//          }
//       }

//       if (flag == 0)
//          printf("%d ", low);

//       // to check prime for the next number
//       // increase low by 1
//       ++low;
//    }

//    return 0;
// }


// #include <stdio.h>

// int main(){

// int num,i,sum=0;
// scanf("%d",&num);

// for(i=1;i<num;i++){
//    if(num%i==0){
//       sum=sum+i;
//    }
// }
//    if(sum==num)
//    printf("the num is perfect num");

//    else printf("The num is not a perfect num");

//    return 0;

// }

// #include <stdio.h>
// int main(){

// int num,i,j;
// scanf("%d",&num);
// for(i=1;i<=num;i++){
//    for(j=1;j<=i;j++){
//      if( (i+j)%2==0){
//       printf("1");
//      }
//      else printf("0");
//    }
//    printf("\n");
// }
//  return 0;
// }

// #include <stdio.h>

// int main(){
//    int arr[]={7,4,5,2,3};
//    int max=-1;
//    int i,j;
//    int arr_size=sizeof(arr)/sizeof(arr[0]);

//    for(i=0;i<arr_size;i++){
//    if(arr[i]>max)
//    max=arr[i];
//    }

//      for(i=max;i>0;i--){//row
//       for(j=0;j<arr_size;j++){//column
//           if(arr[j]>=i)
//           printf("*");
//           else printf(" ");
//       }
//       printf("\n");
//      }

//    return 0;
// }

// #include <stdio.h>
// #include <math.h>
// #include <time.h>
// #include <stdlib.h>

// int main(){

// //Generate 50 numbers randomly between 1 and 50 and store them into an array. Then take several numbers
// //from the user unless s/he enters -1. For every input print if the number is present in the array or not.

// int random[50];

// srand(time(NULL));
//    for(int h=0;h<50;h++){
//       random[h]= rand()%50+1;
//     } 

//    int a[1000];
//     for(int i=0;i<=1000;i++){
//        scanf("%d",&a[i]);
//        if(a[i]==-1)
//      { break;}
//       
// int i;
// for(int j=0;j<50;j++){
//     if(random[j]=a[i]){

//     printf("present\n");
//     break;}

//     else printf("not present");
//   }
 //   }
//   return 0;
// }


// #include <stdio.h>
// #include<time.h>
// #include<stdlib.h>

// int main()
// {
    
//   int random[50]; 
//   srand(time(NULL));
//   for(int h=0; h<50; h++){
      
//       random[h]= rand()%50+1; 
//   }
  
//   int inp[1000];
//   for(int i=0; i<=1000;i++){
      
//       scanf("%d",&inp[i]); 
      
//       if(inp[i]==-1){  
//           break;
//       }
//        for(int k=0; k<50; k++){
          
         
//           if(random[k]==inp[i]){
            
//             printf("The number is present\n");  
//             break;
//           }
//          //else printf("the num is not present");
//         }
      
//   } 
//   return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){

//   int random[50];
//   srand(time(NULL));
//   for(int h=0;h<50;h++){
//     random[h]=rand()%50+1;
//   }
//   int i;
//   int a[1000];
  
//   for(i=0;i<=1000;i++){
//     scanf("%d",&a[i]);
//     if(a[i]==-1)
//     {break;}

//     int j;
//     for(j=0;j<50;j++){
//       if(random[j]==a[i]){
//         printf("present");
//         break;
//       }
//       //else printf("not present");
//     }
//   }

//   return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){

//   int random[50];
//   srand(time(NULL));
//   for(int h=0;h<50;h++){
//     random[h]=rand()%50+1;
//   }
//   int i;
//   int a[1000];
  
//   for(i=0;i<=1000;i++){
//     scanf("%d",&a[i]);
//     if(a[i]==-1)
//     {break;}

//     int j;
//     for(j=0;j<50;j++){
//       if(random[j]==a[i]){
//         printf("present");
//         break;
//       }
//       //else printf("not present");
//     }
//   }

//   return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>

// int main(){

// int a[]={7,4,5,2,3};
// int max=-1;
// int arr_size=sizeof(a)/sizeof(a[0]);
// int h,i,j;

// for(i=0;i<arr_size;i++){
//   if(a[i]>max){
//     max=a[i];
//   }
// }

// for(i=max;i>0;i--){
//   for(j=1;j<arr_size;j++){
//     if(a[j]>=i)
//     printf ("*");
  
//   else printf(" ");} printf("\n");
// }
// return 0;}

// #include<stdio.h>
// #include<stdlib.h>

// int main (){

// int size;
// scanf("%d",&size);
// int arr[size+1];
// for(int k=0;k<size;k++){
//   scanf("%d",&arr[k]);
// }

// int key;
// printf("THE VALUE TO BE INSERTED");
// scanf("%d"<&key);

// sesh kori nai
//   return 0;
// }

// #include<stdio.h>


// int main (){

// int arr[]={8 ,3 ,8, 5, 4 ,4 ,3, 5};
// int arr_size=sizeof(arr)/sizeof(arr[0]);

// for(int i=0;i<arr_size;i++){
//   int count=0;
//   for( int j=0;j<arr_size;j++){
//     if(arr[i]==arr[j]){
//       count++;
//     }
//   }
//   if (count%2!=0){
//     printf("%d %d",arr[i],count);
//   break;}
// }

//   return 0;
// }

// // #include<stdio.h>
// //  int main(){

//  int arr[]={1,3,2,1,2,3,5,5,3};

//  int size = sizeof(arr)/sizeof(arr[0]);

// for (int i=0;i< size;i++){
//     int count=0;
//     for(int k=0;k<size;k++){
//         if(arr[i]==arr[k])
//         count++;
//     }
//     if(count%2!=0){
//         printf("%d %d",arr[i],count);
//         break;
//     }
// }

//     return 0;
//  }

// #include<stdio.h>
// #include<math.h>



// #include<stdio.h>
// #include<math.h>
// int main(){

//  int n,result=0,reminder;
//  scanf("%d",&n);

//  while(n>0){
//    reminder=n%10;
//    result=result*10+reminder;
//    n=n/10;
//  }
//  if(result==n)
//  printf("pa");
//  else printf("noa");

//   return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main (){

// int reminder, n,result=0,sum;
// scanf("%d",&n);

//  while(n>0){
       
//      reminder=n%10;
//      result=result*10+reminder;
//      sum=n/10;
      
   
//    if(result==n)
//    printf("palindrome");
//   else printf("not palindrome");}
//    return 0;
// }

#include<stdio.h>
 int main(){

 int arr[]={1,3,2,1,2,3,5,5,3};

 int size = sizeof(arr)/sizeof(arr[0]);

for (int i=0;i< size;i++){
    int count=0;
    for(int k=0;k<size;k++){
        if(arr[i]==arr[k])
        count++;
    }
    if(count%2!=0){
        printf("%d %d",arr[i],count);
        break;
    }
}

    return 0;
 }