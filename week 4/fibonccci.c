#include<Stdio.h>
int main()
{
	int n,f=0,s=1,t,i;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("%d\n",f);
	printf("%d\n",s);
	for(i=1;i<=n-2;i++)
	{ 
	     t=f+s;
	     printf("%d\n",t);
    
	     f=s;
	     s=t;
	}
	return 0;
}
