// #include<stdio.h>
// #include<math.h>

// int main() {
//     int number,counter,sum=0;
//     printf("enter a number:\n");
//     scanf("%d",&number);

//     while(number>0){

//     if (number%2==0){
//         number=number/2;
//         sum=sum+number;
//         counter++;

//     }

//     else{
//         break;
//         }

//      }

//       printf("%d", sum);

//     return 0;
// }

#include <stdio.h>
int main()
{

    int number, counter = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number > 0)
    {
        if (number % 2 == 0)
        {
            number = number / 2;
            counter++;
        }
        else
        {
            break;
        }
    }

    printf("%d\n", counter);

    return 0;
}