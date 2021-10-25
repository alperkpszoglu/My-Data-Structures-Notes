#include <iostream>
using namespace std;

void swap(int* num1,int* num2){
	int temp = *num1;
	*num1=*num2;
	*num2=temp;
}


int division(int arr[],int min, int max){
	
	int pivot = arr[max];
	int i = min-1;
	for(int j=min;j<max;j++){
		
		if(arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[max]);
	return i+1;
}


void QuickSort(int arr[],int min,int max)
{
	if(min < max){
	int pivot = division(arr,min,max);	
		
	QuickSort(arr,min,pivot-1);
	QuickSort(arr,pivot+1,max);
	}	
}


int main(){
	
int arr[] = {2,38,3,5,47,15,36,26,27,44,46,4,19,8};
int n = sizeof(arr)/sizeof(arr[0]);

QuickSort(arr,0,n-1);

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";	
}
return 0;
}
