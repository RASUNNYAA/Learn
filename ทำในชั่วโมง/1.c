
#include <stdio.h>
int main() 
{
float num;
int result;
printf("Enter a number: ");
scanf("%f", &num);
if (num < 0) 
{
    num = num * -1;
}
result = (int)num;
printf("Result: %d\n", result);
return 0;
}
