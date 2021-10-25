#include <iostream>
#include <math.h>
using namespace std;
class Tamsayi
{
	int deger;
	public:
		friend istream& operator>>(istream& is,Tamsayi& m);
		int operator[](int);
};
int Tamsayi::operator[](int i)
{
	if (deger<pow(10,i))
     return -1;
     else
     return deger/((int)pow(10,i))%10;
}
istream& operator>>(istream& is, Tamsayi& m)
{
	is>>m.deger;
	return is;
}
int main()
{
	Tamsayi nsn;
	cout<<"Bir tamsayi giriniz: ";
	cin>>nsn;
	cout<<"Sayinin 0. basamagi:"<<nsn[0]<<endl;
	cout<<"Sayinin 2. basamagi:"<<nsn[2]<<endl;
	return 0;
}

