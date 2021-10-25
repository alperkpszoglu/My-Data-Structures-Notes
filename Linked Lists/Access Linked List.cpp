#include <iostream>
#include <stdlib.h>   
using namespace std;

typedef struct n{
	int x;
	n* next;
}node;

void show(node* root){
	while(root!=NULL){
		cout<<root->x<<" ";
		root = root->next;
	}
}

//function that adds a node to the end
void add(node* r, int x){
	while(r->next!=NULL){
		r = r->next;
	}
	r->next = (node*)malloc(sizeof(node));
	r->next->x = x;
	r->next->next=NULL;
}
int main(){
	n* root;
	root = (node*)malloc(sizeof(node));
	root->x=10;
	root->next = (node*)malloc(sizeof(node));
	root->next->x=20;
	root->next->next = (node*)malloc(sizeof(node));
	root->next->next->x=30;
	root->next->next->next=NULL; 
	node* iter;
	iter=root;
	int i=0;
	while(iter->next !=NULL){
		cout<<i<<". eleman: "<<iter->x<<endl;
		iter = iter->next;
		i++;
	}
	
	
	/* added 4 nodes at the end
	for(int i=1;i<5;i++){
		iter->next = (node*)malloc(sizeof(node));
		iter = iter->next;
		iter->x = i*5;
		iter->next=NULL;
	}*/
	
	for(int i=1;i<5;i++){
		add(root,i*5); //worse performence than above bc every time it starts from root
	}
	
	show(root);
}
