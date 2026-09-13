#include<stdio.h>
int main()
{
    int base,exponent,result=1,i;
    printf("Enter base and exponent:");
    scanf("%d %d",&base,&exponent);
    for(i=1;i<=exponent;i++)
        result*=base;
    printf("Result=%d",result);
    return 0;
}
