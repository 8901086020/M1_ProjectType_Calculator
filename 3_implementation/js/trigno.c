#include<stdio.h>
#include<math.h>
int trigno(double degree)
{
    double radian = degree * (M_PI / 180);

    printf("sin value is %lf \n", sin(radian));
    printf("cos value is %lf \n", cos(radian));
    printf("tan value is %lf \n", tan(radian));
    return radian;
}
