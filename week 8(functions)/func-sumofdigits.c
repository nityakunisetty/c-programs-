#include <stdio.h>
int sum(int);
int main(){
	int n,res;
	printf("enter the number\n");
	scanf("%d",&n);
	res=sum(n);
	printf("Sum of digits of %d is %d",n,res);
	return 0;
}
int sum(int n){
	int s=0;
	while(n!=0){
		s+=n%10;
		n=n/10;
	}
	return s;
}
