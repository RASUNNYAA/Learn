#include <stdio.h>

struct Computer
{
	char brand[50];
	float price;
};

int main()
{
	struct Computer c;

	printf("Brand : ");
	scanf("%s", c.brand);

	printf("Price : ");
	scanf("%f", &c.price);

	printf("\nBrand : %s\n", c.brand);
	printf("Price : %.2f Baht\n", c.price);

	return 0;
}
