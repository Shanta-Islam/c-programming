#include<stdio.h>
int main() {

int sec,h,m,s;
scanf("%d",&sec);

h=(sec/3600);
m=((sec%3600)/60);
s=((sec%3600)%60);
printf("%d\n%d\n%d",h,m,s);

return 0;

}
