#include <stdio.h>

int main() 
{
    float score;
    
    printf("Enter score: ");
    scanf("%f", &score);
    
    if (score >= 50) 
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}
