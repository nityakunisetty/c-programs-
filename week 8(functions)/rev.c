#include <stdio.h>
void input(int a[],int n){
	printf("Enter the Elements in Array\n");
   	int i;
	for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
}
void rev(int a[],int n){
	printf("Reversed array:\n");
	int i;
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
int main(){
	int a[50],n,i;
	printf("Enter No. of Elements in The Array\n");
	scanf("%d",&n);
	input(a,n);
	rev(a,n);
	return 0;
}
