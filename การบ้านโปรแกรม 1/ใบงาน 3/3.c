#include <stdio.h>

int main()
{
    float bmi;

    printf("Enter BMI value: ");
    scanf("%f", &bmi);

    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 22.9)
    {
        printf("Normal\n");
    }
    else if (bmi >= 23 && bmi <= 24.9)
    {
        printf("Overweight\n");
    }
    else if (bmi >= 25)
    {
        printf("Obese\n");
    }

    return 0;
}
