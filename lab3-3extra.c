#include <stdio.h>
int main() {

int num=0,i;
scanf("%d",&i);

while(i>0 && i%2==0)
{
    num++;
    i=i/2;
}
printf("%d",num);


return 0;

}