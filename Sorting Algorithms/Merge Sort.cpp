#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define ARRAYSIZE 100

using namespace std;

void Merge(int A[], int p, int q, int r);
void MergeSort(int A[],int p, int r);

int main()
{
    int arr[ARRAYSIZE];
    int i;
    int num;
    time_t t;
    srand((unsigned) time(&t));
    for(i = 0; i < ARRAYSIZE; i++)
    {
        num = rand();
        arr[i] = num;
    }

    clock_t start_t, end_t;
    double cpu_time_used;

    start_t = clock();
    MergeSort(arr,0,ARRAYSIZE-1);
    end_t = clock();
    cpu_time_used = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("Toplam gecen sure (Merge Sort): %f saniyedir.\n", cpu_time_used);

    for(i = 0; i < ARRAYSIZE; i++)
    {
        printf("%d: %d\n", i+1, arr[i]);
    }

    return 0;
}

void Merge(int A[], int p, int q, int r)
{
	int i,j,k;
	int leftLength=q-p+1; 
	int rightLength=r-q;
	
	int leftArr[leftLength],rightArr[rightLength];
	
	for(i=0;i<leftLength;i++){
		leftArr[i] = A[p+i];
	}
	for(j=0;j<rightLength;j++){
		rightArr[j] = A[q+1+j];
	}
	
	i=0,j=0;k=p;
	
	while(i < leftLength && j < rightLength){
		
		if(leftArr[i]<=rightArr[j]){
			A[k] = leftArr[i];
			i++;
		}
		else{
			A[k] = rightArr[j];
			j++;
		}
		k++;
	}
	
	while(i<leftLength){
		A[k]=leftArr[i];
		i++;
		k++;
	}
	
	while(j<rightLength){
		A[k]=rightArr[j];
		j++;
		k++;
	}	
}

void MergeSort(int A[],int p, int r)
{
	if(p==r)
	return; 
	
    int mid = (p+r)/2;
    
    MergeSort(A,p,mid);
    MergeSort(A,mid+1,r);
    Merge(A,p,mid,r);
}
