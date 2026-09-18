#include <stdio.h>

struct Phone
{
    char model[50];
    float price;
};

void display(struct Phone p)
{
    printf("\nModel : %s\n", p.model);
    printf("Price : %.2f Baht\n", p.price);
}

int main()
{
    struct Phone p1;

    printf("Phone Model : ");
    scanf("%s", p1.model);

    printf("Price : ");
    scanf("%f", &p1.price);

    display(p1);

    return 0;
}
