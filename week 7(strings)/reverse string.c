#include<stdio.h>
int main()
{
	char st[20];
	int i,count=0;
	printf("enter the elements of the string\n");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		count++;
	}
	printf("the length of the string = %d \n",count);
	printf("the reverse of the string is \n");
	for(i=(count-1);i>=0;i--)
	{
		printf("%c",st[i]);
	}
	return 0;
}
