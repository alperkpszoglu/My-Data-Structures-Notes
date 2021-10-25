#include <iostream>
using namespace std;
class YerlesimBirimi{
	public:
	string isim;
	float nufus;
	float dogum,olum;
	void isimAta(){cin>>isim;}
	void nufusAta(){cin>>nufus;}
	void dogumAta(){cin>>dogum;}
	void olumAta(){cin>>olum;}
	float DogumOrani();
	float OlumOrani();
};
float YerlesimBirimi::DogumOrani(){
	return dogum/nufus;
}
float YerlesimBirimi::OlumOrani(){
	return olum/nufus;
}
int main(){
	for (int i=0;i<2;i++){
	YerlesimBirimi oran;
	cout << "Yerlesim Biriminin ismini giriniz: ";
	oran.isimAta();
    cout<<"      Nufusunu giriniz:";
    oran.nufusAta();
    cout<<"      Dogum sayisini giriniz: ";
    oran.dogumAta();
	cout<<"      Olum sayisini giriniz: ";
	oran.olumAta();
	cout <<"         "<<oran.isim<<" --- "<<"Dogum Orani:"<<oran.DogumOrani()<<endl;
	cout <<"         "<<oran.isim<<" --- "<<"Olum Orani: "<<oran.OlumOrani()<<endl;
}
return 0;
}
