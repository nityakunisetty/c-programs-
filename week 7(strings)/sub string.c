#include<stdio.h>
#include<string.h>
int main()
{
	char st[100],subst[50];
	int i,j;
	printf("enter the string\n");
	gets(st);
	printf("enter substring to find the position in string \n");
	gets(subst);
	for(i=0;st[i]!=0;i++)
	{
		for(j=0;st[j]!=0;j++)
		{
			if(st[i+j]!=subst[j])
			{
				break;
			}
		}
		if(subst[j]=='\0')
		{
			printf("%d",i+1);
		}
	}
	return 0; 
	
}
