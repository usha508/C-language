#include<stdio.h>
int main() {
    int r,l,h,a,b,c;
    printf("enter radius of the circle:");
    scanf("%d", &r);
    printf("enter length and breadth of rectangle:");
    scanf("%d %d", &l, &h);
    printf("enter side lengths of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    printf("perimeter of circle is:%.2f\n", 2*3.14*r);
    printf("perimeter of rectangle is:%d\n", 2*(l+h));
    printf("perimeter of triangle is:%d\n", a+b+c);
    return 0;
}