#include <stdio.h>
int rev(int n){
	int r,i;
	while(n!=0){
		r=(r*10)+(n%10);
		n=n/10;
	}
	return r;
}
int main(){
	int n,res;
	printf("Enter a Number\n");
	scanf("%d",&n);
	res=rev(n);
	printf("The Reverse of %d is %d",n,res);
	return 0;
}
