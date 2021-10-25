#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct n{
	int x;
	n* next;
} node;


int main(){
	
node* root;
root = (node*)malloc(sizeof(node));
root->x = 10;
root->next = (node*)malloc(sizeof(node));
root->next->x = 50;
root->next->next = (node*)malloc(sizeof(node));
root->next->next-> x=100;
cout<<root->next-> next-> x<<endl;

node* iter;
iter = root->next->next; 
iter->x=75;
//cout<<iter->x;
//Or
int &ptr=iter->x;
cout<<ptr;


	
	
	
	
}
