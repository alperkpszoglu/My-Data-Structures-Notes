#include <iostream>
#include <exception>
using namespace std;
class KuralDisiDurum: public exception{
	virtual const char* what() const throw()
	{
		return "Hatali ders notu girildi...";
	}
}Hata;

class Ogrenci{
	public:
	int ogrNo;
	float gno;
	void hesap();
};

struct Ders{
	int dersNotu,kredisi;
	string dersAdi;
};

void Ogrenci::hesap(){
	int kacDers;
	float Tkredi=0,Tpuan=0;
	cout<<"Ogrencinin numarasini girin: ";
	cin>>ogrNo;
	cout<<"Ogrencinin ders sayisini girin: ";
	cin>>kacDers;
	Ders dizi[kacDers];
	cout<<"Derslerin isim not ve kredi bilgisini girin: "<<endl;
	try{
	for(int i=0;i<kacDers;i++){
		if(dizi[i].dersNotu>100)
		throw Hata;
		cin>>dizi[i].dersAdi>>dizi[i].dersNotu>>dizi[i].kredisi;
	}
}catch(exception& d){
	cout<<d.what()<<endl;
}
	for(int i=0;i<kacDers;i++){
		Tpuan+=dizi[i].dersNotu*dizi[i].kredisi;
		Tkredi+=dizi[i].kredisi;
	}
	gno=Tpuan/Tkredi;
}

int main()
{
	Ogrenci ogrenci;
	ogrenci.hesap();
	cout<<"Ogrenci No: "<<ogrenci.ogrNo<<" Not Ortalamasi: "<<ogrenci.gno<<endl;
	return 0;
}
