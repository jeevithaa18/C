#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter p,r and t:");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("simple interest=%.2f",si);
    return 0;
}
