#include <stdio.h>
int main() {
    int r;
    printf("enter the radius of sphere:");
    scanf("%d", &r);
    printf("volume of the sphere is: %.2f\n", 1.33*3.14*r*r);
    printf("surface area of the sphere is: %.2f\n", 4*3.14*r*r);
}