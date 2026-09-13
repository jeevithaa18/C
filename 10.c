#include<stdio.h>
int main()
{
    float a,b;
    char op;
    printf("enter expressions:");
    scanf("%f %c %f",&a,&op,&b);
    switch(op){
case'+':
    printf("result=%.2f",a+b);
    break;
case'-':
    printf("result=%.2f",a-b);
    break;
case'*':
    printf("result=%.2f",a*b);
    break;
case'/':
    printf("result=%.2f",a/b);
    break;
default:
    printf("invalid operator");
    }
    return 0;
}
