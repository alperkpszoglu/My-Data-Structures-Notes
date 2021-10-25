#include <iostream>
using namespace std;
class Ulke{
	int telefon;
	long nufus;
	string baskent,plaka,dil;
	public:
		Ulke(string x,string y):baskent(x),plaka(y){}
		Ulke(){}
		Ulke(string x):baskent(x){}
		Ulke(long x):nufus(x){}
		Ulke(string x,string y,string z):baskent(x),plaka(y),dil(z){}
		Ulke(int x):telefon(x){}
};

