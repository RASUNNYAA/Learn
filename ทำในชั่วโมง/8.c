#include <stdio.h>

//ไม่มีค่าส่งกลับ ชื่อฟังก์ชั่น (ไม่มีค่าเข้า);
void show_name();

//ไม่มีค่าส่งกลับ ชื่อฟังก์ชั่น (มีค่าเข้า);
void show_number(int x);

//มีค่าส่งกลับ ชื่อฟังก์ชั่น (ไม่มีค่าเข้า);
int sumint();
float sumfloat();

//มีค่าส่งกลับ ชื่อฟังก์ชั่น (มีค่าเข้า);
int sum_two_numbers(int x, int y);
float sum_two_floats(float x, float y);


void main() 
{
    show_name();
    show_number(10);
    int sum = sumint();
    printf("The sum is: %d\n", sum);
    float sumf = sumfloat();
    printf("The sum of floats is: %f\n", sumf);
    int sum2 = sum_two_numbers(5, 7);
    printf("The sum of two numbers is: %d\n", sum2);
}

void show_name()
{
    printf("My name is Somchai\n");
}

void show_number(int x)
{
    printf("The number is: %d\n", x);
}

int sumint()
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    return x + y;
}

float sumfloat()
{
    float x, y;
    printf("Enter two floats: ");
    scanf("%f %f", &x, &y);
    return x + y;
}

int sum_two_numbers(int x, int y)
{
    return x + y;
}
