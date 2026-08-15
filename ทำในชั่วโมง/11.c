#include <stdio.h>
#include <string.h>

struct address
{
    int number;    // เลขที่บ้าน
    char road[20]; // ถนน
};
void main()
{
    struct address address;
    printf("Number Road: ");
    scanf("%d", &address.number);

    printf("Road: ");
    scanf("%s", address.road);

    address.number = 24;
    strcpy(address.road, "Sukhumvit");

    printf("Number: %d\n", address.number);
    printf("Road: %s\n", address.road);
}