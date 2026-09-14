#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
        printf("greatest=%d",a);
    else if (b>=a && b>+c)
        printf("greatest =%d",b);
    else
        printf("greatest =%d",c);
    return 0;

}
