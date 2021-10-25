#include <iostream>
using namespace std;
class Nokta{
	int x;
	int y;
	public:
		Nokta(int _x,int _y):x(_x),y(_y){}
		friend class Dikdortgen;
};
class Dikdortgen{
	Nokta a;
	Nokta b;
	public:
		Dikdortgen(Nokta _a,Nokta _b):a(_a),b(_b){}
		float alan();
		int cevre();
};
float Dikdortgen::alan(){
	int k=(b.x-a.x)*(b.y-a.y);
	if(k<0)
	return k=k*-1;
	else 
	return k;
}
int Dikdortgen::cevre(){
	int k=(b.x-a.x)*2+(b.y-a.y)*2;
	if(k<0)
	return k=k*-1;
	else
	return k;
}
int main()
{
	int x,y;
	cout<<"a noktasi (x,y):";
	cin>>x>>y;
	Nokta a(x,y);
	cout<<"b noktasi (x,y):";
	cin>>x>>y;
	Nokta b(x,y);
	Dikdortgen d(a,b);
	cout<<"Cevre:"<<d.cevre()<<endl;
	cout<<"Alan:"<<d.alan()<<endl;
	return 0;
}
