#include <stdio.h>
int prime(int);
int main(){
	int n,r;
	printf("Enter the Number\n");
	scanf("%d",&n);
	r=prime(n);
	if(r==0)
		printf("%d is a prime number",n);
	else 
		printf("%d is not a prime number",n);
	return 0;
}
int prime(int n){
	int i,c=0;
	for(i=2;i<n;i++){
		if(n%i==0)
			c++;
	}
	return c;
}
