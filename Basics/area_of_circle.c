#include <stdio.h>

float areaOfCircle(float r)
{
    return 3.14 * r * r;
}

int main()
{
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
