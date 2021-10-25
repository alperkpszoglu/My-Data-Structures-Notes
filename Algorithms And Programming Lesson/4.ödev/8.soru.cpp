#include <iostream>
using namespace std;
class VucutKutlesi{
	float boy;
	float kilo;
	string durum;
	public:
		VucutKutlesi(float _boy,float _kilo):boy(_boy),kilo(_kilo){}
		float vkiHesapla();
		float idealKiloHesapla();
		friend void testVkiHesapla();
		friend void testIdealKiloHesapla();
		};
		float VucutKutlesi::vkiHesapla(){
			return kilo/(boy*boy);
		}
		float VucutKutlesi::idealKiloHesapla(){
			
		}
    	void testVkiHesapla(){
		    cout <<"VKI hesabi test ediliyor..."<<endl;
			cout<<"Kilo: "<<kilo<<" kg"<<endl;
			cout<<"Boy: "<<boy<<" m"<<endl;
			cout<<"Test basarili.."<<endl;
			cout<<"Hesaplanan: ";
			oran.vkiHesapla();
			if(k<15) durum="Aclik";
			else if(k<18.5) durum="Zayif";
			else if(k<25) durum="Normal";
			else if(k<30) durum="Kilolu";
			else  durum="Obez";
			cout<<"Durum: "<<durum<<endl;	
		}
    	void testIdealKiloHesapla(){
		    cout<<endl<<"Ideal kilo hesabi test ediliyor..."<<endl;
			cout<<"Kilo: "<<kilo<<" kg"<<endl;
			cout<<"Boy: "<<boy<<" m"<<endl;
			cout<<"Test basarili.."<<endl;
			float k=(boy*boy)*22;
			cout<<"Ideal kilo: "<<k<<endl;
			}
		int main()
		{   VucutKutlesi oran(1.80,100);
			testVkiHesapla();
		    testIdealKiloHesapla();
			return 0;
		}
