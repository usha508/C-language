#include <stdio.h>
int main() {
    int a;
    printf("enter the side length of the cube:");
    scanf("%d", &a);
    printf("volume of cube is:%d\n", a*a*a);
    printf("surafce area of cube is:%d\n", 6*a*a);
}