#include <stdio.h>

struct Product
{
    char name[10];
    int quantity;
};

int main()
{
    struct Product product[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Product %d\n", i + 1);
        printf("Name : ");
        scanf("%s", product[i].name);

        printf("Quantity : ");
        scanf("%d", &product[i].quantity);
    }

    printf("\nFirst product\n");
    printf("Name : %s\n", product[0].name);
    printf("Quantity : %d\n", product[0].quantity);

    return 0;
}
