#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
	int min,temp;
	for(int i=0;i<size;i++){ 
		min = i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[min])
			min=j;
		}
		temp = arr[i]; //swapping
		arr[i] = arr[min]; 
		arr[min] = temp;
	}
}


int main(){
	
int arr[] = {2,38,3,5,47,15,36,26,27,44,46,4,19,8};
int n = sizeof(arr)/sizeof(arr[0]);

SelectionSort(arr,n);

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";	

}
}
