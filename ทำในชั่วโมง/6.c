#include <stdio.h>

int main()
{
    // ประกาศตัวอาร์เรย์
    int x[5];
    {
        x[0] = 20;
        x[1] = 30;
        x[2] = 40;

        printf("%d\n", x[0]);
        printf("%d\n", x[1]);
        printf("%d\n", x[2]);
    }

    int x[5] = {20, 30, 40};

    printf("%d\n", x[0]);
    printf("%d\n", x[1]);
    printf("%d\n", x[2]);   

    return 0;
}