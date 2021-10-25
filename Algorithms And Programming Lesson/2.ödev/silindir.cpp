#include <iostream>
#define PI 3.14159265
using namespace std;
class Silindir{
	public:
		int r;
		int h;
		float yuzelselAlaniHesapla();
		float hacimHesapla();
};
float Silindir::yuzelselAlaniHesapla(){
	return 2*PI*r*h+2*PI*r*r;
}
float Silindir::hacimHesapla(){
	return PI*r*r*h;
}
int main(){
	Silindir silindir;
	cout<<"Yuksekli (h):";
	cin>>silindir.h;
	cout<<"Taban yaricapi (r):";
	cin>>silindir.r;
	cout<<"-------------------"<<endl;
	cout<<"Yuzey alani(A):"<<silindir.yuzelselAlaniHesapla()<<endl;
	cout<<"Hacim (H):"<<silindir.hacimHesapla()<<endl;
	return 0;
}
