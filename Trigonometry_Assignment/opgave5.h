#include "Bio.h"



void opgave5()
{
    float a, b, c, angelA, angelB, angelC=90;
    printf("You chose to calculate the area of an arbitrary triangle.\n");
    printf("Enter side a: \n");
    scanf("%f",&a);
    printf("Enter side b: \n");
    scanf("%f",&b);
    c = sqrt(pow(a,2)+pow(b,2));
    // Herons formel: sqrt(s*(s-a)*(s-b)*(s-c) hvor s = (a+b+c)/2
    angelA = acos(((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)))*180/PI;
    angelB = acos(((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c)))*180/PI;

    printf("The area of the triangle is: %.2f\n", angelA);
    printf("The area of the triangle is: %.2f\n", angelB);
    printf("The area of the triangle is: %.2f\n", angelC);
}