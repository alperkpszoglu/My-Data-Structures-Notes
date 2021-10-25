#include <iostream>
using namespace std;
class Enstruman
{
	protected:
		string isim;
		public:
			Enstruman (string _isim):isim(_isim){}
			virtual void cal(string eser) = 0;
};
class Orkestra{
	Enstruman* enstrumanlar[5];
	static int x;
	public:
	void enstrumanEkle(Enstruman* e);
	void eserCal(string eserAdi);
};
void Orkestra::enstrumanEkle(Enstruman* e)
{
	enstrumanlar[x] = e;
	x++;
}
void Orkestra::eserCal(string eserAdi)
{
	for(int i=0;i<x;i++){
		Enstruman* e = enstrumanlar[i];
		e -> cal(eserAdi);
	}
}
int Orkestra::x=0;
class Gitar:public Enstruman{
	public:
		Gitar():Enstruman("Gitar"){}
		void cal(string eser);
};
void Gitar::cal(string eser)
{
	cout<<isim<<" caliyor..."<<endl;
}
class Keman:public Enstruman{
	public:
		Keman():Enstruman("Keman"){}
		void cal(string eser);
};
void Keman::cal(string eser)
{
	cout<<isim<<" caliyor..."<<endl;
}
class Piyano:public Enstruman{
	public:
		Piyano():Enstruman("Piyano"){}
		void cal(string eser);
};
void Piyano::cal(string eser)
{
	cout<<isim<<" caliyor..."<<endl;
}
int main()
{
	Orkestra orkestra;
	Keman keman;
	Piyano piyano;
	Gitar gitar;
	orkestra.enstrumanEkle(&keman);
	orkestra.enstrumanEkle(&piyano);
	orkestra.enstrumanEkle(&gitar);
	orkestra.eserCal("Pavane");
	return 0;
}

