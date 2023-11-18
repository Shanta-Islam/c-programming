#include <stdio.h>
#include <math.h>
int main() {
  int i,n;
  printf("the value of n:");
  scanf("%d",&n);
  printf("series");
  for(i=1;i<=n;i++){
    if(i==1){
        printf("%d",i);
    }
    else if (i%2==0){
        printf("-%d",i);
    }
    else{
        printf("+%d",i);
    }
  }
    return 0;
}
