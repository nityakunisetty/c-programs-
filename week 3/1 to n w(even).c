#include<stdio.h>
int main()
{
    int i=1; 
    int n;
    printf("enter n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d",i);
        }
        i++;
    }
    return 0;
}