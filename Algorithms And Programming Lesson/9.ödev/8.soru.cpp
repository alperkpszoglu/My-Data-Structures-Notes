#include <iostream>
#include <exception>
using namespace std;
class ZamanHata:public exception{
const char* what() const throw(){	
	return "\nZaman yanlis yazilmistir...";
}
}hataliZaman;
int main()
{
	int saat,dakika;
	char secim;
	do{
	cout<<"24 saat formatinda saati girin: ";
	cin>>saat>>dakika;
	cout<<"12 saat formatina ceviriliyor: ";
	try{
	if(saat>24 || dakika>60)
	throw hataliZaman;
	else if(saat>12){
		saat=saat-12;
		if(dakika<10)
		cout<<saat<<":0"<<dakika<<endl;
		else
		cout<<saat<<":"<<dakika<<endl;
	}
	else if(saat<12)
	cout<<saat<<":"<<dakika;
}catch(exception &a){
	cout<<a.what()<<endl;
}
cout<<"Devam edelim mi (E/H):";
cin>>secim;
}while(secim=='E');
return 0;
}
