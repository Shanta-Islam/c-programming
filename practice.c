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



#include <stdio.h>

#define SIZE 20

int main() {
    int numbers[SIZE];  // Array to store the numbers
    int count = 0;      // Variable to keep track of the number of elements in the array

    printf("Enter 20 numbers between 10 and 100:\n");

    for (int i = 0; i < SIZE; i++) {
        int num;
        scanf("%d", &num);

        // Check if the number is between 10 and 100
        if (num < 10 || num > 100) {
            printf("Please enter a number between 10 and 100.\n");
            i--;  // Decrement i to re-enter the current number
            continue;
        }

        // Check if the number is a duplicate
        int isDuplicate = 0;
        for (int j = 0; j < count; j++) {
            if (numbers[j] == num) {
                isDuplicate = 1;
                break;
            }
        }

        // If the number is not a duplicate, add it to the array and print it
        if (!isDuplicate) {
            numbers[count] = num;
            count++;
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}