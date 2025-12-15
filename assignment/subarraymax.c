#include <stdio.h>
int main(){
	int a[50],i,j,n,m1,m2;
	printf("Enter the No. of Elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum=0,max=a[0];
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			sum+=a[j];
			if(sum>max){
				max=sum;
				m1=i;
				m2=j;
			}
		}
		sum=0;
	}
	printf("Max sum=%d(From index %d to %d)",max,m1,m2);
	return 0;
}
