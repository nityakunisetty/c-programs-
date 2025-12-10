#include<stdio.h>
#include<string.h>
int main()
{
	char st[30],ch;
	int i,flag=0;
	printf("enter a string \n");
	gets(st);
	printf("enter a charector to search \n");
	scanf("%c",&ch);
	for(i=0;st[i]!=0;i++)
	{
		if(st[i]==ch)
		{
			printf("the position of the charector = %d",i+1);
			flag=1;
			break;
		}
	}
	if(flag=0)
	{
		printf("the charector dosent exist in the string");
	}
	return 0;
}
