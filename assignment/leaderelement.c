#include <stdio.h>
int main(){
	int a[50],i,j,p,n;
	printf("Enter the No. of Elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	 	p=0;
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				p++;
			}	
		}
		if(p==n-1-i)
			printf("%d ",a[i]);
	}
	return 0;
}
