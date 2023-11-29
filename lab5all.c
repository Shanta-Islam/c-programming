//lab5(1)

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


//lab5(2) correct code
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


// lab5(3)
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




//lab5(4)
#include<stdio.h>
int main(){

int size,key,index=-1,j,i;

printf("Enter array size:\n");
scanf("%d",&size);

int arr[size];

for(j=0;j<size;j++){
    scanf("%d",&arr[j]);
}

printf("Enter the key");
scanf("%d",&key);
for(i=0;i<size;i++){
    if(arr[i]==key){
        index=i;
    }
}
if (index==-1){
    printf("NOT FOUND");
}

else printf("FOUND");


    return 0;
}
