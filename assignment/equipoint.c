#include <stdio.h>
int main(){
	int a[30],i,j,n,s1,s2;
	printf("Enter the No. of Elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Equilibrium point: ");
	for(i=1;i<n;i++){
		s1=0,s2=0;
		for(j=0;j<i;j++){
			s1+=a[j];
		}
		for(j=n-1;j>i;j--){
			s2+=a[j];
		}
		if(s1==s2)
			printf("%d",i);
 	}
	return 0;
}
