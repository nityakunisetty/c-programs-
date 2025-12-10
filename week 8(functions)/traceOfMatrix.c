#include<stdio.h>
int trace(int n,int a[50][50]){
	int i,j,sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum+=a[i][i];
			}
		}
	}
	return sum;
}
void input(int a[50][50],int n){
	printf("Enter the Elements in Array\n");
   	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
    		scanf("%d",&a[i][j]);
   		}
	}
}
int main(){
	int a[50][50],n,i;
	printf("Enter Order Of Matrix\n");
	scanf("%d",&n);
	input(a,n);
	printf("Trace=%d",trace(n,a));
	return 0;
}
