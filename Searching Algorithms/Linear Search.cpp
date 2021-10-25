#include <iostream>
using namespace std;

int LinearSearch(int arr[],int number,int n){
	
	for(int i=0;i<n;i++){
		if(arr[i]==number){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int arr[] = {3,5,63,12,35,75,-12,42,-15,75,7,1,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	int number;
	
	cout<<"Aranacak sayiyi giriniz: ";
	cin>>number;
	int index = LinearSearch(arr,number,size);
	if(index != -1)
	cout<<"Aradigin sayi "<<index<<". indekste";
	else
	cout<<"Aradigin sayi dizide yok..";	
}
