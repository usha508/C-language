#include <stdio.h>
int main() {
    int r,h;
    printf("enter radius of cylinder:");
    scanf("%d", &r);
    printf("enter height of cylinder:");
    scanf("%d", &h);
    printf("the volume of cylinder is:%.2f\n", 3.14*r*r*h);
    printf("the surface area of cylinder is:%.2f\n", (2*3.14*r*h)+(2*3.14*r*r));
}