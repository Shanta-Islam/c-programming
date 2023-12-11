//...lab5(1)

// //#include <stdio.h>


// //int main(){
//  //   int a[]={7,4,5,2,3};
//  //   int max=-1;
//  //   int array_size= sizeof(a)/sizeof(a[0]);

//    //find array max element
//  //  for(int i=0;i<array_size;i++){
//  //   if(a[i]>max){
//  //       max=a[i];
//  //   }
   
//  //  } 
//    //find histogram
//  //  for(int i=max;i>0;i--){//row
//  //  for(int j=0;j<array_size;j++){//column
//   //      if(a[j]>=i){
//  //          printf("* ");
//  //      }
//   //     else printf(" ");
//  //   }
//  //   printf("\n");
//  //  }
  
// //    return 0;
// //}




//lab5(2)ami eta korsilm..r eta vul
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>

//int main(){

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


//...lab5(2) correct code
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
      
      
//       else printf("the num is not present");}
      
//   } 

  

//     return 0;
// }


// ...lab5(3)
// #include<stdio.h>

// int main(){

// int i=0,count=0, index=-1;
// int arr[50];
// int l,k;

// scanf("%d",&arr[i]);

// while(arr[i]!=-1){
//     i++;
//     scanf("%d",&arr[i]);
// }
// for(  k=0;k<=i;k++){

//     for( l=k+1; l<i;l++){
//         if(arr[k]==arr[l]){
//             index=k;
//             count++;
//         }
//     }
//     if (count>1)
//     break;
// }

// printf("%d %d", arr[index],count+1);

//     return 0;
// }




//....lab5(5)  
//3 ta num array te nibo randomly.
//and then check kore dekhbo je ei number ta 
//array te exist kore kina ,jodi exist kore taile found asbe ,
//na thakle not found asbe.

// #include<stdio.h>
// int main(){

// int size,key,index=-1,j,i;

// printf("Enter array size:\n");
// scanf("%d",&size);

// int arr[size];

// for(j=0;j<size;j++){
//     scanf("%d",&arr[j]);
// }

// printf("Enter the key");
// scanf("%d",&key);
// for(i=0;i<size;i++){
//     if(arr[i]==key){
//         index=i;
//     }
// }
// if (index==-1){
//     printf("NOT FOUND");
// }

// else printf("FOUND");


//     return 0;
// }


//...lab5(6)

// #include<stdio.h>
//  int main(){

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


//...lab5(6) jodi user input nia korte bole taile emn hobe..
// #include<stdio.h>
// #include<stdlib.h>

// int main(){

// int n, count=0;

// printf("enter array size:");
// scanf("%d",&n);

// int arr[n];

// printf("enter array: ");

// for(int j=0;j<n;j++){
//     scanf("%d", &arr[j]);
// }

//  int size = sizeof(arr)/sizeof(arr[0]);


//  for (int i=0;i< size;i++){
//     int count=0;
//     for(int k=0;k<size;k++){
//          if(arr[i]==arr[k])
//          count++;
//      }
//      if(count%2!=0){
//          printf("%d %d",arr[i],count);
//          break;
//      }
//  }
//     return 0;
// }


//...lab5(7)

// #include<stdio.h>
// #include<stdlib.h>

// int main (){

//  int arr[]={11 ,13 ,15 ,17, 19 ,21};
//  int arr2[]={10 ,12, 14, 16 ,18 ,20 ,22};

//  int size=sizeof(arr)/sizeof(arr[0]);
//  int size2=sizeof(arr2)/sizeof(arr2[0]);

//  int result[size+size2];

//  int i=0,j=0,k=0;

// while(i<size && j<size2){
//     if(arr[i]<arr2[j]){
//         result[k++]=arr[i++];
//     }
//     else result[k++]=arr2[j++];
// }

// while(i<size){
//     result[k++]=arr[i++];
// }

// while(j<size2){
//     result[k++]=arr2[j++];
// }

// int l=0;
// while(l<size+size2){
//     printf("%d ",result[l++]);
// }

//     return 0;
// }


//...lab5(8)
// #include <stdio.h>
// int main(){
    
//     int size;
//     printf("Input the size of array\n");
//     scanf("%d", &size);
//     int arr[size+1];
//     printf("Input elements in the array in ascending order:\n");
//     for(int k=0; k<size ; k++){
//         scanf("%d", &arr[k]);
//     }
//     int key;
//     printf("Input the value to be inserted :\n");
//     scanf("%d", &key);

//     int index;
    
//     for(int i=0 ; i<size-1; i++){
//         if(arr[i]<key && arr[i+1]>key){
//             index=i+1;
//             break;
//         }
//     }
    
//     for(int l= size; l>index-1;l--){
//         arr[l]=arr[l-1];
//     }
    
//     arr[index]=key;
    
//     printf("Array after operattion: \n");
//     for(int p=0; p<size+1; p++){
//         printf("%d ", arr[p]);
//     }
    
//     return 0;
// }


//lab5(4)
// #include <stdio.h>

// int main()
// {
    
//     int num[20] , counter=0, flag=0;
    
//     for(int i=0; i<5; i++){
//         scanf("%d", &num[i]);
        
//         for(int j = 0; j<=i ; j++){
//             if(num[i]==num[j]){
//                 counter++;
//             }
          
//         }
//           if(counter>1){
//               flag++;
//                 printf("present\n");
//             }
//             counter=0;
//     }
     
//     if(flag==0){
//         printf("Worst Case");
//     }
//     return 0;
// }

lab5(6)
#include<stdio.h>
int main (){

int arr[]={10,12,14,16,18,20,22};
int arr2[]={11,13,15,17,19,21};
int size= sizeof (arr)/sizeof (arr[0]);
int size2= sizeof(arr2)/sizeof(arr2[0]);
int i,j,k,n3;
n3= size+size2;
int arr3[n3];


for(i=0;i<size;i++){
  arr3[i]=arr[i];}
for(j=0;j<size2;j++) {
  arr3[j+size]=arr2[j];}

  printf("the merged array:");
  for(i=0;i<n3;i++){
    printf("%d ",arr3[i]);
  }
  printf("final array after sorting:");
  for(i=0;i<n3;i++){
    int temp;
    for(j=i+1;j<n3;j++){
      if(arr3[i]>arr3[j]){
        temp=arr3[i];
        arr3[i]=arr3[j];
        arr3[j]=temp;
      }
    }
  }
  printf("print the sorted array");
  for(i=0;i<n3;i++){
    printf("%d ",arr3[i]);
  }
  return 0;}

