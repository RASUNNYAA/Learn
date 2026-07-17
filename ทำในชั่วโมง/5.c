#include <stdio.h>

int main()
{
     int n,m;
    
        printf("Input n: ");
        scanf("%d", &n);
        printf("Input m: ");
        scanf("%d", &m);

        for (int i = n; i <= m; i++)
        {
            printf("%d \n", i);
        }
        return 0;
    
}