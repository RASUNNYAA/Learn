#include <stdio.h>

struct Product
{
	char name[30];
	int quantity;
};

int main()
{
	struct Product items[3];

	for (int i = 0; i < 3; i++)
	{
		printf("Product %d\n", i + 1);

		printf("Name : ");
		scanf("%s", items[i].name);

		printf("Quantity : ");
		scanf("%d", &items[i].quantity);
	}

	printf("\nFirst Product\n");
	printf("%s %d\n",
		   items[0].name,
		   items[0].quantity);

	return 0;
}
