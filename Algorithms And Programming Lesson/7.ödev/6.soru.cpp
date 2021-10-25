#include <iostream>
using namespace std;
class HastaFatura{
	protected:
		string isim;
		int hastanePayi;
		int ilacMasrafi;
	public:
		HastaFatura(string x,int y,int z):isim(x),hastanePayi(y),ilacMasrafi(z){}
        virtual void odeme();   
};
void HastaFatura::odeme(){
	int ucret = hastanePayi + ilacMasrafi;
	cout<<"Hasta Ismi: "<<isim<<" --- Toplam Ucret: "<<ucret<<" lira"<<endl;
}
class SigortaliHastaFatura:public HastaFatura{
	string sirket;
	public:
		void odeme();
		SigortaliHastaFatura(string x,int y,int z,string k):HastaFatura(x,y,z){sirket=k;}
};
void SigortaliHastaFatura::odeme(){
	int ucret = ilacMasrafi*20/100;
	cout<<"Hasta Ismi: "<<isim<<" --- Sigorta: "<<sirket<<" --- Toplam ucret: "<<ucret<<" lira"<<endl;
}
int main()
{
	char s;
	string isim,sirket;
	int ilacMasrafi;
	int hastanePayi;
	HastaFatura* faturalar[20];
	for (int i=0;i<20;i++){
		cout<<"Hasta sigortali mi?(E/H):";
		cin>>s;
		cout<<"Hastanin ismi: ";
		cin>>isim;
		cout<<"Hastane ucreti: ";
		cin>>hastanePayi;
		cout<<"Ilac masrafi: ";
		cin>>ilacMasrafi;
		if (s=='E'){
			cout<<"Sigorta sirketi: ";
			cin>>sirket;
			faturalar[i] = new SigortaliHastaFatura (isim,hastanePayi,ilacMasrafi,sirket);
		}else
		faturalar[i]=new HastaFatura(isim,hastanePayi,ilacMasrafi);
		faturalar[i]->odeme();
	}
	return 0;
}

