#include <stdio.h>
void mul(int n){
	int i,p;
	for(i=1;i<=10;i++){
		p=n*i;
		printf("%d*%d=%d\n",n,i,p);
	}
}
int main(){
	int n;
	printf("Enter a Number\n");
	scanf("%d",&n);
	printf("Multiplication table of %d:\n",n);
	mul(n);
	return 0;
}
