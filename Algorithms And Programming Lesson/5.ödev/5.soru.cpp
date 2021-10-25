#include <iostream>
using namespace std;
class Renk{
	int a[3];
	public:
	Renk(int r=0,int g=0,int b=0){a[0]=r;a[1]=g;a[2]=b;}
	friend	Renk operator+(Renk &,Renk &);
	friend Renk operator+(int i,Renk &);	
	void goruntule(); 
	int operator[](int i);
};
Renk operator+(Renk &n1,Renk &n2){
	Renk yeni;
	yeni.a[0] = n1.a[0] + n2.a[0];
	yeni.a[1] = n1.a[1] + n2.a[1];
	yeni.a[2] = n1.a[2] + n2.a[2];
	return yeni;
}
Renk operator+(int i,Renk &n){
	Renk yeni2;
	yeni2.a[0] = n.a[0] + i;
	yeni2.a[1]= n.a[1] + i;
	yeni2.a[2] = n.a[2] + i;
	return yeni2;
}
void Renk::goruntule()
{
	cout<<"("<<a[0]<<","<<a[1]<<","<<a[2]<<")"<<endl;
}
int Renk::operator[](int i){
	return a[i];
}
int main()
{
	Renk r1(255,67,123), r2(0,34,56), r3;
	r1.goruntule();
	r2.goruntule();
	r3= r1 + r2;
	r3.goruntule();
	r2 = 20 +r2;
	r2.goruntule();
	r3.goruntule();
	cout<<r1[0]<<endl;
	cout<<r1[1]<<endl;
	cout<<r1[2]<<endl;
	return 0;
}
