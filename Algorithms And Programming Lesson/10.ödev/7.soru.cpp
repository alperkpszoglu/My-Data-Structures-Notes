#include <iostream>
#include <fstream>
using namespace std;
class Notlar{
	public:
		int no,vize1,vize2,final;
		int hesapla();
};
int Notlar::hesapla(){
	int ortalama;
	try{
		if(vize1>100)
		throw vize1;
		if(vize2>100)
		throw vize2;
		if(final>100)
		throw final;
}catch(int sayi){
	cout<<"Yanlis not girisi: "<<sayi<<" ";
}
ortalama=(vize1*30/100)+(vize2*30/100)+(final*40/100);
return ortalama;
}
int main(){
	Notlar islem;
	ifstream okuyucu("Girdi.txt",ios::in);
	while(!okuyucu.eof()){
		okuyucu>>islem.no>>islem.vize1>>islem.vize2>>islem.final;
		cout<<"Ogrenci No: "<<islem.no<<" Ortalama: "<<islem.hesapla()<<endl;
	}
	okuyucu.close();
	return 0;
}
