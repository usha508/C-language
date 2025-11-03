#include <stdio.h>
int main() {
    float a,b;
    printf("enter length of first diagonal");
    scanf("%f", &a);
    printf("enter length of second diagonal");
    scanf("%f", &b);
    printf("area of rhombus is: %.2f", (a*b)/2);
    return 0;
}