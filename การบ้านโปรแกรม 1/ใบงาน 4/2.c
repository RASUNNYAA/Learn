#include <stdio.h>

int main()
{
     int n,m;
    
        printf("Input N: ");
        scanf("%d", &n);
        printf("Input M: ");
        scanf("%d", &m);

        for (int i = n; i <= m; i++)
        {
            printf("%d ", i);
        }
        return 0;
    
}