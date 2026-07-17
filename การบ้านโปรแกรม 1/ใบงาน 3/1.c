#include <stdio.h>

int main()
{
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    if (score >= 80)
    {
        printf("Excellent\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}