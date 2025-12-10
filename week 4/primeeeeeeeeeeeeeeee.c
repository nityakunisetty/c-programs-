#include<stdio.h>
int main()
{
	int n,x,i,count=0;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		count++;
	}
	if (count==2)
	printf("prime no.");
	else printf ("not prime no.");
	return 0;
}
