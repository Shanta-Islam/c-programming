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
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){

//   int num[50],i;

//   srand(time(0));
  
//     int size;
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

//   while(1){
//     for(i=1;i<=50;i++){
//     scanf("%d",&num[i]);
//     if(num[i]==-1){
//       break;
//     }

//     if(num[i]<=50){
//       printf("the num is present");
//     }
//     else printf("the num is not present");}
//   }

//   return 0;
// }

//Write a program in C to find the sum of all elements of the array.
// #include<stdio.h>
// int main(){
// int arr[100];
// int n,sum=0,i;
// scanf("%d",&n);
// for(i=0;i<n;i++){
//   scanf("%d",&arr[i]);
// }
// for( i=0;i<n;i++){
//   sum=sum+arr[i];}
//   printf("%d",sum);
//   //printf("\n");


// return 0;}


//Write a program in C to count the total number of duplicate elements in an array
// #include<stdio.h>
// int main(){
//   int arr[100];
//   int n,i,j,counter=0;
//   scanf("%d",&n);

//   for(i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//   }
//   for(i=0;i<n;i++){
//     for(j=i+1;j<n;j++){
//       if(arr[i]==arr[j]){
//         counter++;
//       }
//     }
//   }
//   printf("the total duplicate num is :%d",counter);
//   return 0;
// }


// Write a program in C to print all unique elements in an array.
// #include<stdio.h>
// int main(){
//   int n,i,j,counter;
//   scanf("%d",&n);
//   int arr[n];

//   for(i=0;i<n;i++){
//     scanf("%d",&arr[i]);}
//   for(i=0;i<n;i++){
//     int counter=0;
//     for(j=0;j<n;j++){
//       if(arr[i]==arr[j]){
//         counter++;}
//         }
      
//     if (counter==1){
//       printf("%d",arr[i]);
//     }
//   }
//   return 0;
// }

// Write a program in C to merge an array in ascending order
// #include<stdio.h>
//  int main(){
//   int n,i,j,temp;
//   scanf("%d",&n);
//   int arr[n];

//   for(i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//   }
//   for(i=0;i<n;i++){
//     for(j=0;j<n-1;j++){
//       if(arr[i]<arr[j]){
//         temp=arr[j];
//         arr[j]=arr[i];
//         arr[i]=temp;
//       }
//     }
//   }
//   printf("the given array in ascending format is:");
//   for(i=0;i<n;i++){
//     printf("%d",arr[i]);
//   }
//   return 0;}

 // Write a program in C to merge an array in decending order
// #include<stdio.h>
//  int main(){
//   int n,i,j,temp;
//   scanf("%d",&n);
//   int arr[n];

//   for(i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//   }
//   for(i=0;i<n;i++){
//     for(j=0;j<n-1;j++){
//       if(arr[i]>arr[j]){
//         temp=arr[j];
//         arr[j]=arr[i];
//         arr[i]=temp;
//       }
//     }
//   }
//   printf("the given array in decending format is:");
//   for(i=0;i<n;i++){
//     printf("%d",arr[i]);
//   }
//   return 0;}


//write a program in c to insert a digit  in the array in ascending order
//hynai eta
#include<stdio.h>
int main(){

int n,i,j,temp;

scanf("%d",&n);
int arr[n+1];

for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
}
int key;
    printf("Input the value to be inserted :\n");
    scanf("%d", &key);
    arr[n]=key;
    
for(i=0;i<n;i++){
 for(j=0;j<n;j++){
  if(arr[j]>arr[j+1]){
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;}
 }
}
for(i=0;i<n+1;i++)
printf("%d ",arr[i]);
  return 0;
}

//2 ta array merge kore choto theke boro shajano.hoise eta.also lab5 er 6 no eta
// #include<stdio.h>
// int main (){

// int arr[]={10,12,14,16,18,20,22};
// int arr2[]={11,13,15,17,19,21};
// int size= sizeof (arr)/sizeof (arr[0]);
// int size2= sizeof(arr2)/sizeof(arr2[0]);
// int i,j,k,n3;
// n3= size+size2;
// int arr3[n3];


// for(i=0;i<size;i++){
//   arr3[i]=arr[i];}
// for(j=0;j<size2;j++) {
//   arr3[j+size]=arr2[j];}

//   printf("the merged array:");
//   for(i=0;i<n3;i++){
//     printf("%d ",arr3[i]);
//   }
//   printf("final array after sorting:");
//   for(i=0;i<n3;i++){
//     int temp;
//     for(j=i+1;j<n3;j++){
//       if(arr3[i]>arr3[j]){
//         temp=arr3[i];
//         arr3[i]=arr3[j];
//         arr3[j]=temp;
//       }
//     }
//   }
//   printf("print the sorted array");
//   for(i=0;i<n3;i++){
//     printf("%d ",arr3[i]);
//   }
//   return 0;}
