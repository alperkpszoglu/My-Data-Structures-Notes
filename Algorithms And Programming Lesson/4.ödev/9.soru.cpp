#include <iostream>
using namespace std;
class Kalem{
	public:
	string isim;
	float fiyat;
	int adet;
	static float toplam; 
};
float Kalem::toplam =0;
int main()
{ 
 Kalem market[3];
 for(int i=0;i<3;i++){
 	cout<<"Kalemin ismini giriniz: ";
 	cin>>market[i].isim;
 	cout<<"Kalemin fiyatini giriniz: ";
 	cin>>market[i].fiyat;
 	cout<<"Kalemin adetini giriniz: ";
 	cin>>market[i].adet;
	Kalem::toplam+=market[i].fiyat*market[i].adet;	
 }
cout<<"Toplam tutar: "<<market[3].toplam<<" lira";
}
