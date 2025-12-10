#include <stdio.h>
int fibonacci(int n){
	int i=0,j=1,k,m;
	printf("%d %d ",i,j);
	for(m=1;m<=n-2;m++){
		k=i+j;
		i=j;
		j=k;
		printf("%d ",k);
	}
	return 0;
}
int main(){
	int n;
	printf("Enter the No. of Digits\n");
	scanf("%d",&n);
	printf("Fibonacci series:\n");
	fibonacci(n);
	return 0;
}
