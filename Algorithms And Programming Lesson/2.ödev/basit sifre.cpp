#include <iostream>  
using namespace std;

int main()
{
     string parola = "12345";
     string input;

do {
	
	cout << "parolanizi giriniz: " ;
	cin >> input;	
	
	if(input !=parola)
	cout << "parolayi yanlis girdiniz"<< endl;
	
}while(input !=parola);

	cout << "parolayi dogru girdiniz..";

	return 0;
}

