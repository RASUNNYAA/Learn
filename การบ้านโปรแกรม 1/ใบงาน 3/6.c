#include <stdio.h>

int main()
{
    int price, cash, change;

    printf("Product Price : ");
    scanf("%d", &price);

    printf("Cash Received : ");
    scanf("%d", &cash);

    change = cash - price;
    printf("Change : %d Baht\n", change);

    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    char *labels[] 
    = {"1000 Baht", "500 Baht", "100 Baht", "50 Baht", "20 Baht", "10 Baht", "5 Baht", "2 Baht", "1 Baht"};

    for (int i = 0; i < 9; i++)
    {
        int count = change / denominations[i];
        if (count > 0)
        {
            printf("%s : %d\n", labels[i], count);
            change = change % denominations[i];
        }
    }

    return 0;
}
