#include <stdio.h>
int main()
{
	int a[50][50],b[50][50],i,j,n;
	printf("Enter the Order of Square Matrix\n");
	scanf("%d",&n);
	printf("Enter The Elements of matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Input Matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Rotated Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[n-1-j][i];
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
