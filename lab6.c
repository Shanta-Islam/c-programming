//problem1
// #include <stdio.h>
// int main(){
// int i,j,k,l;
// int row,column;
// printf("inpute rows and columns of the 1st matrix:");
// scanf("%d%d",&row,&column);
// printf("inpute rows and columns of the 2nd matrix:");
// scanf("%d%d",&row,&column);
// int arr[row][column];
//  printf("input elements in the first matrix:");
// for(i=0;i<row;i++){
//     for(j=0;j<column;j++){
//         scanf("%d",&arr[i][j]);
//     }
// }
// printf("input elements in the second matrix:");
// for(k=0;k<row;k++){
//     for(l=0;l<column;l++){
//         scanf("%d",&arr[k][l]); }
//     }
// for(i=0;i<row;i++){
//     for(j=0;j<column;j++){
//         printf("The first matrix is:%d\n",arr[i][j]);
//     }
// }
// for(k=0;k<row;k++){
//     for(l=0;l<column;l++){
//         printf("The second matrix is:%d\n",arr[k][l]);
//     }
// }
// if(arr[i][j]==arr[k][l]){
//     printf("two matrices are equal");}
//     return 0;
// }

//problem 2
// #include <stdio.h>
// int devisibleby5and7(int x,int y){
//     int count=0;
//     for(int i=x;i<=y;i++){
//         if(i%5==0 && i%7==0){
//             printf("numbers:%d\n",i);
//             count++;
//         }
//     }
//     printf("count %d",count);
// }
// int main(){
//     int strt,end,count;
//     scanf("%d %d",&strt,&end);
//     devisibleby5and7(strt,end);
// }

//problem 3
// #include <stdio.h>
// int radiustoarea(int r){
//     int circlearea=3.1416*r*r;
//     printf("Area of the circle:%d\n",circlearea);
//     return circlearea;
// }

// int checkarea(int circlearea){
//     if(circlearea>25){
//         printf("Greater than 25");
//     }
//     else printf("Less than 25");
// }

// int main(){
//     int radius,circlearea;
//     printf("enter the radius: ");
//     scanf("%d",&radius);

//  int area= radiustoarea(radius);
//    checkarea(circlearea);
//     return 0;
// }

//problem4
// #include <stdio.h>
// int integerPower(int base, int exponent){
//     int result=1;
//     for(int i=0;i<exponent;i++){
//         result=result*base;
//     }
//     return result;
// }
// int main(){
//     int ans;
//     ans=integerPower(3,3);
//     printf("ans=%d",ans);
//     return 0;
// }


 //problem 5
//   #include <stdio.h>
//   int gcd(int a,int b){
//     int hcf;
//     for(int i=1;i<=a && i<=b;i++){
//         if(a%i==0 && b%i==0){
//             hcf=i;
//         }
//     }
//     return hcf;
//   }
//   int main(){
//     int num1,num2;
//     printf("Enter two numbers : ");
//     scanf("%d %d",&num1, &num2);

//     int result = gcd(num1, num2);
//     printf("The GCD of %d and %d = %d", num1, num2, result);

//      return 0;
//   }

//problem 6
// #include <stdio.h>
// //////fac=n+fac(n-1)
// int fac(int n){
//     if(n==0 || n==1)
//         return 1;
//     else 
//     return n+fac(n-1);
// }
// int main(){
//     int result,num;
//     scanf("%d",&num);
//     result=fac(num);
//     printf("result=%d",result);
//     return 0;
// }

//problem 7
#include <stdio.h>
int print_HW(int n){

    if(n==0){
        return 0;
    }
    else{
        printf("Hello world when n=%d\n",n);
        print_HW(n-1);
        printf("return when n=%d\n",n);
    }
}

int main(){
    int n,ans;
    scanf("%d",&n);
    printf("First call---->\n");
    print_HW(n);
    printf("Finish------!!!");

    return 0;
}