#include <iostream>
using namespace std;
class Oyuncu
{
	private:
		string rumuz;
		int puan;
		public:
			
			Oyuncu(string _rumuz,int _puan):
				rumuz(_rumuz),puan(_puan){}
			Oyuncu(string _rumuz);
		    Oyuncu(){}
			int puanAl();
			void durumYazdir();
};
int Oyuncu::puanAl()
{
	return puan;
}
void Oyuncu::durumYazdir()
{
	cout<<rumuz<<endl;
	cout<<puan<<endl;
}
int main()
{
	Oyuncu oyuncular[2];
	Oyuncu oyuncu1("Alper",900);
	Oyuncu oyuncu2("Mario",460);
	Oyuncu oyuncu3("Keloglan",500);
	oyuncular[0] = oyuncu1;
	oyuncular[1] = oyuncu2;
	oyuncular[2] = oyuncu3;
	int max = oyuncular[0].puanAl();
	for(int i=0;i<3;i++)
	{
		if(oyuncular[i].puanAl()>max){
			max = oyuncular[i].puanAl();
		}
	}
	for(int i=0;i<3;i++){
		if(oyuncular[i].puanAl() ==max){
			cout<<"Kazanan..."<<endl;
			oyuncular[i].durumYazdir();
			break;
		}
	}
	return 0;
}

