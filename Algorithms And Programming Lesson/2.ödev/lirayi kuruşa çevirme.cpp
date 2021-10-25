#include <iostream>
using namespace std;
class Para{
	public:
		float liradegeri;
		int elli,yirmiBes,on,bes,bir;
		void liraAta();
		void donustur();
		void yaz();
};
void Para::liraAta(){
	cin>>liradegeri;
}
void Para::donustur(){
  elli=liradegeri/0.5;
  liradegeri=liradegeri-elli*0.5;
  yirmiBes=liradegeri/0.25;
  liradegeri=liradegeri-yirmiBes*0.25;
  on=liradegeri/0.1;
  liradegeri=liradegeri-on*0.1;
  bes=liradegeri/0.05;
  liradegeri=liradegeri-bes*0.05;
  bir=liradegeri/0.01;
  liradegeri=liradegeri-bir*0.01;
}
void Para::yaz(){
	cout<<" "<<elli<<"  "<<"50 kurus,"<<endl;
	cout<<" "<<yirmiBes<<"  "<<"25 kurus,"<<endl;
	cout<<" "<<on<<"  "<<"10 kurus,"<<endl;
	cout<<" "<<bes<<"  "<<" 5 kurus,"<<endl;
	cout<<" "<<bir<<"  "<<"1 kurus"<<endl;
}
int main(){
	Para cevir;
	cout<<"Para miktarini lira olarak giriniz: ";
	cevir.liraAta();
	cout <<cevir.liradegeri<<" lira:"<<endl;
	cevir.donustur();
	cevir.yaz();
 return 0;	
}
