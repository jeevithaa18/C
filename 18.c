#include<stdio.h>
int main()
{
    float base,height,area;
    printf("enter base height:");
    scanf("%f %f",&base,&height);
    area=0.5*base*height;
    printf("area=%.2f",area);
    return 0;
}
