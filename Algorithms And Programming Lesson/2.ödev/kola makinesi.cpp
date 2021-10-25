#include <iostream>
using namespace std;
class KolaMakinesi
{
	float fiyat;
	int sayi;
	public:
		void ilkYukleme (float f=2.5,int s=100);
		void kolaverme();
		void goster();
};
void KolaMakinesi::ilkYukleme(float f,int s){
	fiyat=f;
	sayi=s;
}
void KolaMakinesi::kolaverme()
{
	float ode,fark;
	cout<<"Kolanin fiyati: "<<fiyat<<"lira."<<endl;
	cout<<"Odemeniz: ";
	cin>>ode;
	if((ode>=fiyat)&&(sayi>0)){
		cout<<"Kolaniz veriliyor."<<endl;
		sayi--;
		fark=ode-fiyat;
		if(fark>0){
			cout<<"Para ustunuz: ";
			if(fark>1.0)
			cout<<fark<<" lira"<<endl;
		else
		cout<<fark*100<<" kurus"<<endl;
		}
	}else
	cout<<"Kola verilemiyor";
}
void KolaMakinesi::goster()
{
	cout<<"Son durum:"<<endl;
	cout<<"Kolanin fiyati: "<<fiyat<<endl;
	cout<<"Kalan Kola sayisi : "<<sayi<<endl;
}
int main()
{
	KolaMakinesi kola;
	kola.ilkYukleme();
	kola.kolaverme();
	kola.goster();
	return 0;
}
