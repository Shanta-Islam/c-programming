// ****problem -1

// #include <stdio.h>

// int main()
// {
//     int i, num1, num2, hcf=1;

//     printf("Enter any two numbers to find HCF: ");
//     scanf("%d%d", &num1, &num2);
//     
//   for(i=1;i<=num1 || i<=num2;i++);

//     {
//         if(num1%i==0 && num2%i==0)
//         {
//             hcf = i;
//         }
//     }

//     printf("HCF of %d ",hcf);

//     return 0;
// }

// ****problem -2

// #include <stdio.h>

// int main()
// {
//    int i, sum=0;

//    printf("Numbers between 100 and 200, divisible by 9 : \n");

//    for(i=101; i<200; i++)
//    {
//      if(i%9==0)
//      {
//        printf("%d", i);
//        sum += i;
//      }
//    }

//    printf("\n\nThe sum : %d \n", sum);
//     return 0;  
// }

// ****problem -3

// #include <stdio.h>
// int main() {
//     int i,num,flag=0;
//     
//     scanf("%d",&num);

//     for (i=2;i<num;i++) {
//         if(num%i==0)
//            flag=1;
//     }
      //  if(flag==1)
//     printf("prime");
       
   //    else
    //     printf("not prime");

//     return 0;
// }

// ****problem -4

// #include <stdio.h>

// int main()
// {
//   int num, i, sum;

//   printf("Input the number: ");
//   scanf("%d", &num);
//   sum = 0;

//   printf("The positive divisors: ");

//   for (i = 1; i < num; i++)
//   {
//     if (num % i == 0)
//     {
//       sum = sum + i;
//       printf("%d  ", i);
//     }
//   }

//   printf("\nThe sum of the divisors is: %d", sum);

//   if (sum == num)
//     printf("\nSo, the number is perfect.\n");
//   else
//     printf("\nSo, the number is not perfect.\n");

//   return 0;
// }

// ****problem -5
// #include <stdio.h>
// int main() {
//     int i, j, n, p, q;

//     printf("Input number of rows : ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             p = 1;
//             q = 0;
//         }
//         else
//         {
//             p = 0;
//             q = 1;
//         }

//         for (j = 1; j <= i; j++)
//         {
//             if (j % 2 == 0)
//                 printf("%d", p);
//             else
//                 printf("%d", q);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// ****problem -6
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int x, sum, ctr;

//     int i, n, m, mm, nn;

//     printf("Input the value of x :");
//     scanf("%d", &x);

//     printf("Input number of terms : ");
//     scanf("%d", &n);

//     sum = x;
//     m = -1;

//     printf("The values of the series: \n %d\n", x);

//     for (i = 1; i < n; i++)
//     {
//         ctr = (2 * i + 1); // Calculate the power of 'x' using the given formula.
//         mm = pow(x, ctr); // Calculate the value of 'x' raised to the power 'ctr'.
//         nn = mm * m;      // Multiply 'mm' with 'm'.
//         printf("%d \n", nn); // Print the calculated term.
//         sum = sum + nn;      // Add the term to the running sum.
//         m = m * (-1);        // Toggle the value of 'm' between -1 and 1.
//     }

//     printf("\nThe sum = %d\n", sum); // Print the final sum.

//     return 0; // Return 0 to indicate successful execution.
// }

// ****problem -7
// #include <stdio.h>

// int main(){
//     int num, r, sum = 0, i;

//     printf("Input a number: ");
//     scanf("%d", &num);

//     for(i = num; num != 0; num = num / 10){ // Loop to reverse the digits of the number.
//          r = num % 10; // Extract the last digit (remainder when divided by 10).
//          sum = sum * 10 + r; // Build the reversed number by adding the extracted digit.
//     }

//     if(i == sum) // Check if the original number and the reversed number are equal.
//          printf("%d is a palindrome number.\n", i); // Print a message if it is a palindrome.
//     else
//          printf("%d is not a palindrome number.\n", i); // Print a message if it is not a palindrome.
// 		  return 0;
// }

// ****problem -8
#include <stdio.h>

int main()
{
    int n1, n2, max;

    printf("Input 1st number for LCM: ");
    scanf("%d", &n1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &n2);

    max = (n1 > n2) ? n1 : n2; // Determine the larger of the two numbers.

    while (1)
    {
        if ((max % n1 == 0) && (max % n2 == 0))
        {
            printf("Expected Output :\n");
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }

}
