#include<stdio.h>
int main()
{
	int n,x,sum=0,rem;
	printf("enter n value");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
	rem=n%10;
	sum=sum + ((rem*rem)*rem);
	n=n/10;
    }
    if (x==sum)
    printf("it is armstrong no.");
    else printf("not a armstrong no,");
    return 0;
}
