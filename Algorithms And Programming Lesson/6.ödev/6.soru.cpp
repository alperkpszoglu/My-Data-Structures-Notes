#include <iostream>
using namespace std;
class Sporcu{
	public:
	string isim;
	string ulke;
};
class Patenci:public Sporcu{
	public:
	float skordizisi[9];
	float ortalamapuan;
	friend	ostream& operator<<(ostream&,Patenci&);	
	friend	ostream& operator<<(ostream&,Patenci&);
	float ort();	
};
istream& operator>>(istream& is,Patenci& d)
{
	for(int i=0;i<10;i++){
		is>>d.skordizisi[i];
	}
}
ostream& operator<<(ostream& os,Patenci& d)
{
	os<<"Isim: "<<d.isim<<endl;
	os<<"Ulke: "<<d.ulke<<endl;
	os<<"Ortalama: "<<d.ort()<<endl;
}
float Patenci::ort(){
	float t=0;
	for(int i=0;i<10;i++){
		t+=skordizisi[i];
	}
  return t/10;
}
int main()
{
	Patenci nesne;
	cout<<"Patencinin ismini giriniz: ";
	cin>>nesne.isim;
	cout<<"Patencinin ulkesini giriniz: ";
	cin>>nesne.ulke;
	cout<<"Skorlar: ";
	cin>>nesne;
	cout<<nesne;
	 
}
