#include <stdio.h>

int main()
{
    float d, r, area;

    printf("Enter diameter: ");
    scanf("%f", &d);

    r = d / 2;
    area = 3.14 * r * r;

    printf("Area of circle = %.2f", area);

    getch();
}
