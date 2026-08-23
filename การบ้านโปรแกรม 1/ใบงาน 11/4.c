#include <stdio.h>

typedef struct
{
	float x;
	float y;
} Point;

Point movePoint(Point point, float moveX, float moveY)
{
	point.x += moveX;
	point.y += moveY;

	return point;
}

int main(void)
{
	Point point;
	Point newPoint;
	float moveX;
	float moveY;

	printf("Enter x coordinate: ");
	scanf("%f", &point.x);
	printf("Enter y coordinate: ");
	scanf("%f", &point.y);
	printf("Enter x movement: ");
	scanf("%f", &moveX);
	printf("Enter y movement: ");
	scanf("%f", &moveY);

	newPoint = movePoint(point, moveX, moveY);

	printf("New point: (%.2f, %.2f)\n", newPoint.x, newPoint.y);

	return 0;
}
