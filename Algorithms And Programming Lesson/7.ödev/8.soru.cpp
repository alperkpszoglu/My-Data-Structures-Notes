#include <iostream>
using namespace std;

class sirket{
	public:
		virtual void hesap()=0;
};
class reklam:public sirket{
	public:
	int sure;
	char zamanDilimi;
	void hesap();
	friend istream& operator>>(istream&,sirket&);
};
istream& operator>>(istream &is, reklam& n){
	cout<<"Reklamin suresini girin:";
	is>>n.sure;
	cout<<"Reklamin zaman dilimi (S/A):";
	is>>n.zamanDilimi;
}
void reklam::hesap(){
	int fiyat;
	if(zamanDilimi=='S')
	fiyat=20000*sure;
	if(zamanDilimi=='A')
	fiyat=40000*sure;
	cout<<"Reklamin fiyati: "<<fiyat<<" lira"<<endl;
}
class diziFilm:public sirket{
	public:
	int bolumSayisi;
	int bolumUzunlugu;
	void hesap();
	friend istream& operator>>(istream&,sirket&);
};
istream& operator>>(istream &is, diziFilm& n){
    cout<<"Dizinin bolum sayisini girin: ";
    is>>n.bolumSayisi;
    cout<<"Bolumun uzunlugunu girin: ";
    is>>n.bolumUzunlugu;   
}
void diziFilm::hesap(){
	int fiyat;
	if(bolumUzunlugu==30)
	fiyat=50000*bolumSayisi;
	if(bolumSayisi==60)
	fiyat=100000*bolumSayisi;
	cout<<"Dizinin fiyati: "<<fiyat<<" lira"<<endl;
}
int main()
{
	reklam reklam1;
	diziFilm diziFilm1;
	char sec;
	for(int i=0;i<2;i++){
	cout<<"Reklam icin (R), dizi film icin (D) girin:";
	cin>>sec;
	if(sec=='R'){
		cin>>reklam1;
		reklam1.hesap();
	}
	if(sec=='D'){
		cin>>diziFilm1;
		diziFilm1.hesap();
	}
}
return 0;
}

