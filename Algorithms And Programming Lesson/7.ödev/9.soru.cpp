#include <iostream>
using namespace std;
class Kutuphane{
	protected:
		string isim;
		int alinanGun;
		public:
		virtual void yaz(){}
		virtual void hesapla() =0;
};
class Ogrenci:public Kutuphane{
	int ogrenciNo;
	public:
		friend istream& operator>>(istream& , Ogrenci&);
		void yaz();
		void hesapla();
};
istream& operator>>(istream &is,Ogrenci& n){
	cout<<"Ogrenci ismi: ";
	is>>n.isim;
	cout<<"Ogrenci No: ";
	is>>n.ogrenciNo;
	cout<<"Kitabin alindigi gun: ";
	is>>n.alinanGun;
}
void Ogrenci::hesapla(){
	int ucret;
	int iade;
	if(alinanGun<4){
	iade = 3-alinanGun;
	cout<<"Iadeye kalan gun sayisi: "<<iade<<" gun."<<endl;
}	else{
	ucret =(alinanGun-3)*2;
	cout<<"Ogrenci gecikme ucreti: "<<ucret<<" lira."<<endl;}
}
void Ogrenci::yaz(){
	cout<<"Ogrencinin Ismi: "<<isim<<endl;
	cout<<"Ogrencinin Numarasi: "<<ogrenciNo<<endl;
    hesapla();
}
class Ogretmen:public Kutuphane{
	int personelNo;
	public:
		friend istream& operator>>(istream& , Ogretmen&);
		void yaz();
		void hesapla();
};
istream& operator>>(istream &is,Ogretmen& n){
	cout<<"Ogretmen Ismi: ";
	is>>n.isim;
	cout<<"Personel No: ";
	is>>n.personelNo;
	cout<<"Kitabin alindigi gun: ";
	is>>n.alinanGun;
}
void Ogretmen::hesapla(){
	int ucret;
	int iade;
	if(alinanGun<6){
	ucret=0;
	iade=5-alinanGun;
	cout<<"Iadeye kalan gun sayisi: "<<iade<<" gun."<<endl;
	}
	else{
	ucret =alinanGun-5;
	cout<<"Ogretmenin gecikme ucreti "<<ucret<<" lira."<<endl; }
}
void Ogretmen::yaz(){
	cout<<"Ogretmenin Ismi: "<<isim<<endl;
	cout<<"Personelin Numarasi: "<<personelNo<<endl;
	hesapla();
}
int main()
{
	char secim;
	cout<<"Ogrenci, Hoca seciniz (O / H): ";
	cin>>secim;
	if(secim=='O'){
		Ogrenci ogrenci;
		cin>>ogrenci;
		ogrenci.yaz();
	}
	if(secim=='H'){
		Ogretmen ogretmen;
		cin>>ogretmen;
		ogretmen.yaz();
	}
	return 0;
}

