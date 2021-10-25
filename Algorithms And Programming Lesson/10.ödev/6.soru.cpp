#include <iostream>
#include <fstream>
using namespace std;
class Islem{
	public:
	int sayi1,sayi2;
	char op;
	int hesap();
};

int Islem::hesap(){
int sonuc;
if(op=='+')
sonuc=sayi1+sayi2;
else if(op=='-')
sonuc=sayi1-sayi2;
if(op=='*')
sonuc=sayi1*sayi2;
if(op=='/')
sonuc=sayi1/sayi2;
return sonuc;
}
int main()
{
	Islem islem;
	ifstream okuyucu1("islenen.dat");
	ifstream okuyucu2("operator.txt");
	while(!okuyucu1.eof()){
    okuyucu1>>islem.sayi1>>islem.sayi2;
    okuyucu2>>islem.op;
    cout<<islem.sayi1<<" "<<islem.op<<" "<<islem.sayi2
	<<" = "<<islem.hesap()<<endl;
} 
	
}
