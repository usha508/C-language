#include <stdio.h>
int main() {
    int r,h,l;
    printf("enter the radius, slant height, height of the cone:");
    scanf("%d %d %d", &r, &h, &l);
    printf("the volume of cone is:%.2f\n", (3.14*r*r*h)/3);
    printf("the surface area of cone is:%.2f\n", (3.14*(r*r+r*l)));
}