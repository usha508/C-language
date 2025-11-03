#include <stdio.h>
int main() {
    int l,b,h;
    printf ("enter the length, breadth, height of the cuboid:");
    scanf("%d %d %d", &l ,&b, &h);
    printf("volume of cuboid is:%d\n", l*b*h);
    printf("surface area of cuboid is:%d\n", 2*(l*b+b*h+h*l));
}