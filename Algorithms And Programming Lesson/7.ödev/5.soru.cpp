#include <iostream>
using namespace std;
class UzaktanKumanda{
	public:
    virtual void ac(){}
    virtual void kapa(){}
    void acmaKomutuAta(UzaktanKumanda* e);
    void kapamaKomutuAta(UzaktanKumanda* d);
};
class TelevizyonAcKomutu:public UzaktanKumanda{
	public:
		void ac(){
			cout<<"Televizyon aciliyor..."<<endl;
		}
};
class TelevizyonKapaKomutu:public UzaktanKumanda{
	public:
		void kapa(){
			cout<<"Televizyon kapaniyor..."<<endl;
		}
};
class OtoparkKapiAcKomutu:public UzaktanKumanda{
	public:
		void ac(){
			cout<<"Otopark aciliyor..."<<endl;
		}
};
class OtoparkKapiKapatKomutu:public UzaktanKumanda{
	public:
		void kapa(){
				cout<<"Otopark kapaniyor..."<<endl;
		}
};
void UzaktanKumanda::acmaKomutuAta(UzaktanKumanda* e){
	UzaktanKumanda* ptr = e;
	ptr->ac();
}
void UzaktanKumanda::kapamaKomutuAta(UzaktanKumanda* d){
	UzaktanKumanda* ptr = d;
	ptr->kapa();
}
int main()
{
	UzaktanKumanda kumanda;
	TelevizyonAcKomutu tvAcKomutu;
	TelevizyonKapaKomutu tvKapaKomutu;
	kumanda.acmaKomutuAta(&tvAcKomutu);
	kumanda.kapamaKomutuAta(&tvKapaKomutu);
	kumanda.ac();
	kumanda.kapa();
    OtoparkKapiAcKomutu kapiAcKomutu;
	OtoparkKapiKapatKomutu kapiKapaKomutu;
	kumanda.acmaKomutuAta(&kapiAcKomutu);
	kumanda.kapamaKomutuAta(&kapiKapaKomutu);
    kumanda.ac();
    kumanda.kapa();
    return 0;
}









