#include <stdio.h>
int main(){
	int a[50],b[50],i,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j=0,k=0;
	for(i=0;i<n;i++){
		if(a[i]!=0){
			b[j]=a[i];
			j++;
		}
		else{
			b[n-1-k]=a[i];
			k++;
		}
	}
	printf("The Required arrangement: ");
	for(i=0;i<n;i++){
	printf("%d ",b[i]);	
	}
	return 0;
}
