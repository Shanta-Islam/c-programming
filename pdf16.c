#include <stdio.h>
int main(){
    int A,B;
    scanf("%d%d",&A,&B);
    if(A>=55 && B>=45)
       { printf("Passed");
    }
    else if (A< 55 && A >=45 && B>=55)
    {
        printf("Passed");
    }
    else if (A >=65 && B<45)
    {
        printf("Reapper in B");
    }
    else{
        printf("Failed");
    }
    return 0;
}