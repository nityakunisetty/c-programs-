#include <stdio.h>
#include <math.h>
int arm(int n){
	int l=0,i=0,m;
	m=n;
	while(m!=0){
		l++;
		m=m/10;
	}
	while (n!=0){
		i+=pow(n%10 , l);
		n=n/10;
	}
	return i;
}
int main(){
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	if(arm(n)==n)
		printf("%d is an Armstrong number",n);
	else
		printf("%d is not an Armstrong number",n);
	return 0;
}
