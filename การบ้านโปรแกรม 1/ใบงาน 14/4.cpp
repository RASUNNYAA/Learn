#include <stdio.h>

struct Triangle
{
    float base;
    float height;
};

int main()
{
    struct Triangle t;

    printf("Base : ");
    scanf("%f", &t.base);

    printf("Height : ");
    scanf("%f", &t.height);

    float area = t.base * t.height / 2;

    printf("Area = %.2f\n", area);

    return 0;
}
