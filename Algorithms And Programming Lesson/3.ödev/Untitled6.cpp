#include <iostream>
using namespace std;
class Polinom{
	int *katsayi;
	int derece;
	public:
		Polinom (int);
		void katsayiAta();
		void yaz();
};
Polinom::Polinom(int x){
	derece=x;
}
int Polinom::katsayiAta(){
	cout<<"Katsayilari giriniz:"<<endl;
	for(int i=0;i<derece;i++){
		cout<<"Katsayi "<<derece<<": ";
		derece--;
	}
	
	
}
int Polinom::yaz(){
	
}
int main()
{
	int d;
	cout<<"Polinomun derecesini giriniz:";
	cin>>d;
	Polinom p1(d),p2(d);
	p1.katsayiAta();
	p2.katsayiAta();
	p1.yaz();
	cout<<" + ";
	p2.yaz();
	cout<<" = ";
	p1.topla(p2);
	p1.yaz();
	return 0;
}
