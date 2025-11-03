#include<stdio.h>
#include<math.h>
int main() 
{
    float a,b,c,s,area;
    printf("enter the three sides of the triangle:");
    scanf("%f %f %f", &a, &b, &c);
    if (a+b>c && b+c>a && c+a>b)
    {
        s=(a+b+c)/2;
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        printf("the area of the triangle is: %.2f\n", area);
    }
    else
    {
        printf("invalid triangle sides");
    }
    return 0;
}