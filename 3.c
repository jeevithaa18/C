#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("enter the numbers:");
   scanf("%d %d",&a,&b);

   temp=a;
   a=b;
   b=temp;

   printf("after swapping:\n");
   printf("a = %d\nb = %d",a,b);
   return 0;
}
