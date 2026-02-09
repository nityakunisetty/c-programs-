#include<iostream>
using namespace std;
int partition(int a[],int low, int high) {
	int pivot=a[high];
	int i=low-1;
	for (int j=low;j<high;j++) {
		if(a[j]<pivot) {
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[high]);
	return (i+1);
}
void quicksort(int a[],int low, int high) {
	if(low<high) {
		int pivotindex=partition(a,low,high);
		quicksort(a,low,pivotindex-1);
		quicksort(a,pivotindex+1,high);
	}
}
void printarray(int a[],int n) {
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main () {
	int n;
	cout<<"enter number of elements: ";
	cin>>n;
	int a[n];
	cout<<"enter elements: ";
	for (int i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	cout<<"sorted array is";
	printarray(a,n);
	return 0;
}
