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
#include <stdio.h>