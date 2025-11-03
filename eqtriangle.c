#include <math.h>
#include <stdio.h>
int main() {
    int a;
    printf("enter side of triangle:");
    scanf("%d", &a);
    printf("area of the eq. triangle is:  %.2f", (sqrt(3)/4)*a*a);
}
