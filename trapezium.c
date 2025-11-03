#include <stdio.h>
int main()
{
    int a,b,h;
    float area;
    printf("enter the lengths of the two parallel sides of trapezium:\n");
    scanf("%d %d", &a, &b);
    printf("enter the height of the trapezium:\n");
    scanf("%d", &h);
    area=(h*(a+b))/2;
    printf("the area of the trapezium is: %.2f\n", area);
}