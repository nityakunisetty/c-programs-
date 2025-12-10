#include <stdio.h>
int fact(int n){
	int f=1,i;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
int main(){
	int n,res;
	printf("Enter a Number\n");
	scanf("%d",&n);
	res=fact(n);
	printf("Factorial of %d is %d",n,res);
	return 0;
}
