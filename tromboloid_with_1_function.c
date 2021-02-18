//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
void main()
{
     float h,d,b;
     float volume;
     printf("Enter the values of h,d,b");
     scanf("%f%f%f",&h,&d,&b);
     volume = (((h*d*b)+(d/b))/3);
     printf("Volume of tromoboloid is %f",volume);
}
