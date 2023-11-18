
#include <stdio.h>

int main()
{
    float radius, perimeter, area;
    scanf("%f", &radius);

    perimeter = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("%f\n%f", perimeter, area);

    return 0;
}