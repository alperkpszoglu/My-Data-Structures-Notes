#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size){
	int key,j;
	for(int i=1;i<size;i++){
		key=arr[i];
		j=i-1;
		while(arr[j]>key && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}


int main(){
	
int arr[] = {2,38,3,5,47,15,36,26,27,44,46,4,19,8};
int n = sizeof(arr)/sizeof(arr[0]);

InsertionSort(arr,n);

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";	

}
}
