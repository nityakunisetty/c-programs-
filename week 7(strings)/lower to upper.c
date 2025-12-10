#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char st[50];
	printf("enter a string ");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]>='a'&&st[i]<='z')
		{
			st[i]=st[i]-32;
		}
	}
	puts(st);
	return 0;
}
