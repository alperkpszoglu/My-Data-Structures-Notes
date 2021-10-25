#include <iostream>
using namespace std;

int BinarySearchRecursive(int arr[],int number,int min,int max){
	
	if(min>max){
	return -1;	
	}
	int mid = (min+max)/2;
	
	if(arr[mid]==number){
		return mid;
	}
	
	if(arr[mid]>number)
		return BinarySearchRecursive(arr,number,min,mid-1);
	else
		return BinarySearchRecursive(arr,number,mid+1,max);
	
}

int BinarySearchIterative(int arr[],int number, int min, int max)
{
  while (max >= min)
  {
    int mid = max+min/2;
  
    if (arr[mid] == number) 
        return mid;  
   
    if (arr[mid] < number) 
        min = mid+1;
   
    else 
        max=mid-1;
  }
  
  return -1; 
}

int main(){
	
	int arr[] = {2,5,9,15,45,54,68,72,83,94}; //Array must be sequential
	int size = sizeof(arr)/sizeof(arr[0]);
	int number;
	
	cout<<"Aranacak sayiyi giriniz: ";
	cin>>number;
	int index = BinarySearchRecursive(arr,number,0,size-1);
	if(index != -1)
	cout<<"Aradigin sayi "<<index<<". indekste";
	else
	cout<<"Aradigin sayi dizide yok..";	
}
