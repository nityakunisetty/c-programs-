#include<stdio.h>
#include<string.h>
int main()
{
	char st1[30],st2[30];
	int length1,length2,i=0,flag=0;
	printf("enter the first string ");
	gets(st1);
	printf("enter the second string ");
	gets(st2);
	length1=strlen(st1);
	length2=strlen(st2);
	if(length1==length2)
	{
		while(st1[i]!='\0'||st2[i]!='\0')
		{
			if(st1[i]!= st2[i])
			{
				flag=1;
				break;
			}
			i++;
		}
		if(flag==0)
		{
			printf("the given strings are equal");
		}
	}
	else
	{
		printf("the given strings are not equal");
	}
	return 0;
}
