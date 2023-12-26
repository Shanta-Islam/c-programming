//problem1
/*#include <stdio.h>
int main(){
int a=5, b=10;
int *ptr1,*ptr2;
ptr1=&a,ptr2=&b;
int sum=*ptr1+*ptr2;
printf("1st number is=%d\n",*ptr1);
printf("2nd number is=%d\n",*ptr2);
printf("1st number address is=%d\n",ptr1);
printf("2nd number address is=%d\n",ptr2);
printf("sum of the two number is =%d\n",sum);
return 0;
}
*/
//problem2
/*#include <stdio.h>
  int increasebyone(int *n){
    return *n+1;
   }
   int main(){
   int p,result;
   scanf("%d",&p);
   int *n=&p;
   result=increasebyone(n);
   printf("%d",result);
   return 0;
   }
    */
//problem 3
/*/*
#include <stdio.h>
int multiplication(int *m,int *n){
    return (*m * *n);
}
 int main(){
    int result,v1,v2;
    scanf("%d%d",&v1,&v2);
   int *vptr1=&v1;
   int *vptr2=&v2;
    result=multiplication(vptr1,vptr2);
    printf("%d",result);
 }
*/
//problem4run dile ans ashena *-*
/*#include <stdio.h>
int evenoddchecker(int n){
    if(n%2==0){
        printf("EVEN");
    }
    else printf("ODD");
}
int main(){
    int(*funcptr)(int);
    funcptr=&evenoddchecker;
    int num;
    scanf("%d",num);
    funcptr(num);
    return 0;
}*/
//problem5
#include <stdio.h>
