#include <stdio.h>
int main(){
	int a[10],n,i,j,c=0;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the Elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				c++;
			}
		}
		if(c>n/2){
			printf("The max repeated no. is %d",a[i]);
			break;
		}
	}
	if(c<n/2)
		printf("No Number is repeated for n/2 times");
	return 0;
}
