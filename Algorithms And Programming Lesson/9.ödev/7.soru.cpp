#include <iostream>
#include <exception>
using namespace std;
class Tarih{
	public:
	int gun,ay,yil;
	string soyisim;
    void dogumgunu(){cin>>soyisim>>gun>>ay>>yil;}	
    void bugun(){cin>>gun>>ay>>yil;}
}; 
class GecersizTarih:public exception{
	const char* what() const throw(){
		return "Gecersiz Dogum Tarihi Girdiniz";
	}
}gecersizTarih;

int main()
{  
    int toplam;
    Tarih Bugun;
	Tarih kisiler[10];
	cout<<"Bugunun tarihi: ";
	Bugun.bugun();
	try{
	for(int i=0;i<10;i++){
		kisiler[i].dogumgunu();
		if(kisiler[i].gun>30 || kisiler[i].ay>12 || kisiler[i].yil>Bugun.yil)
		throw gecersizTarih;
		else if(Bugun.ay>kisiler[i].ay){
		kisiler[i].gun+=30;
		kisiler[i].ay+=11;
	toplam=kisiler[i].gun-Bugun.gun+(kisiler[i].ay-Bugun.ay)*30;
	cout<<kisiler[i].soyisim<<", dogum gunune "<<toplam<<" gun kaldi."<<endl;
	toplam=0;
		}
		else if(Bugun.ay<kisiler[i].ay){
		toplam=kisiler[i].gun-Bugun.gun+(kisiler[i].ay-Bugun.ay)*30;
		cout<<kisiler[i].soyisim<<", dogum gunune "<<toplam<<" gun kaldi."<<endl;
    	toplam=0;
		}
	}
}catch(exception& a){
	cout<<a.what();
}
	return 0;	
}
