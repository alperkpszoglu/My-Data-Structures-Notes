#include <iostream>
using namespace std;
class Rasyonel{
	int pay;
	int payda;
	public:
		Rasyonel (int _pay,int _payda):pay(_pay),payda(_payda){}
		int payAl(){return pay;}
		int paydaAl(){return payda;}
        bool operator>(Rasyonel&);
};
bool Rasyonel::operator>(Rasyonel& r){
	float a=(float)pay/(float)payda;
	float b=(float)r.pay/(float)r.payda;
	return a>b;
}
int main()
{
	Rasyonel r1(1,2),r2(2,9);
	if (r1>r2) {
		cout<<r1.payAl()<<"/"<<r1.paydaAl()<<" > ";
		cout<<r2.payAl()<<"/"<<r2.paydaAl()<<endl;	}
    else{
	cout<<r1.payAl()<<"/"<<r1.paydaAl()<<" <= ";
	cout<<r2.payAl()<<"/"<<r2.paydaAl()<<endl;	
	}
return 0;
}
