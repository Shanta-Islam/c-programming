#include <stdio.h>
float main() {


    float height;
    float width;
    scanf ("%f",&height);
    printf("\n");
    scanf ("%f",&width);

    float perimeter=2*(height + width);
    float area=(height*width);

    
    printf ("%f\n%f",perimeter,area);

    return 0;
}