// C program to find area of rectangle 
#include<stdio.h>
int main (){
    float length, width,area;
    printf("Enter length of the rectangle : ");
    scanf("%f",&length);
    printf("Enter width of the rectangle : ");
    scanf("%f",&width);

    // calculation
    area = length * width;
    printf("Area of rectangle is : %f",area);

    return 0;
}