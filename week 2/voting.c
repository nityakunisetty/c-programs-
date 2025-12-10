#include<stdio.h>
int main()
{
    float age;
    printf("enter the age");
    scanf("%f",&age);
    if(age>=18)
    {
        printf("eligible to vote");
    }
    else
    {
       printf("not eligible to vote ");
    }
    return 0 ;

}