#include <stdio.h>
int max(int a[50],int n){
	int i,max;
	max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i])
			max=a[i];
	}
	return max;
}
int main(){
	int a[50],n,i;
	printf("Enter No. of Elements in The Array\n");
	scanf("%d",&n);
	printf("Enter the Elements in Array\n");
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	printf("Maximum no. is %d",max(a,n));
	return 0;
}
