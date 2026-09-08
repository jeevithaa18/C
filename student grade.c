# include<stdio.h>
int main()
{
   char name[50];
    float m1,m2,m3,m4,m5;
    float total,percentage;
    char grade;
    printf("enter student name:");
    scanf("%s",name);
    printf("enter marks in subject 1:");
    scanf("%f",&m1);
    printf("enter marks in subject 2:");
    scanf("%f",&m2);
    printf("enter marks in subject 3:");
    scanf("%f",&m3);
    printf("enter marks in subject 4:");
    scanf("%f",&m4);
    printf("enter marks in subject 5:");
    scanf("%f",&m5);
    total=m1+m2+m3+m4+m5;
    percentage=total/5;
    if(percentage>=90)
       grade='A';
    else if(percentage>=80)
       grade='B';
    else if(percentage>=70)
       grade='c';
    else if(percentage>=60)
       grade='D';
    else
       grade='f';
       printf("\n------STUDENT RESULT------\n");
       printf("Name         :%s\n",name);
       printf("total        :%.2f/500\n",total);
       printf("percentage   :%.2f%%\n",percentage);
       printf("grade        :%c\n",grade);
       return 0;

    }


