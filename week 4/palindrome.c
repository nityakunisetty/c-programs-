#include<stdio.h>
int main()
{
	int n,x,sum=0,rem;
	printf("enter n value\n");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if (x==sum)
	printf("It is a palindrome");
	else printf("not a palindrome");
	return 0;
}
