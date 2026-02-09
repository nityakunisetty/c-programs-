#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right) {
	int i,j,k;
	
	int n1=mid-left+1;
	int n2=right-mid;
	int leftarr[n1],rightarr[n2];
	for (i=0;i<n1;i++)
	leftarr[i]=arr[left+i];
	for (j=0;j<n2;j++)
	rightarr[j]=arr[mid+1+i];
	while (i<n1 && j<n2) {
		if(leftarr[i]<=rightarr[j]) {
			arr[k]=leftarr[i];
			i++;
		}
		else {
			arr[k]=rightarr[j];
			j++;
		}
		k++;
	}
	while (i<n1) {
		arr[k]=leftarr[i];
		i++;
		k++;
	}
	while (j<n2) {
		arr[k]=rightarr[j];
		j++;
		k++;
}
}
void mergesort(int arr[],int left, int right)
 {
	if(left<right) {
		int mid=left+(right-left)/2;
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		merge(arr,left,mid,right);
	}
}
void printarray(int arr[],int size) {
	for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
}
int main () {
	int n;
	cout<<"enter number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"enter elements: ";
	for (int i=0;i<n;i++)
	cin>>arr[i];
	
	mergesort(arr, 0, n-1);
	
	cout<<"sorted array is";
	printarray(arr,n);
	return 0;
}

