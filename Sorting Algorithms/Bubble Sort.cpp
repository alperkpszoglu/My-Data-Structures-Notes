#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
	int temp;
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j+1]; //swapping
				arr[j+1] = arr[j];
				arr[j] = temp; 
			}
		}
	}
}


int main(){
	
int arr[] = {2,38,3,5,47,15,36,26,27,44,46,4,19,8};
int n = sizeof(arr)/sizeof(arr[0]);

BubbleSort(arr,n);

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";	

}
}
