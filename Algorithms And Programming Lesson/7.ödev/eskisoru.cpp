#include <iostream>
using namespace std;
class Oyun{
	protected:
	string isim;
	public:
		virtual void oyna(){}
};
class OyunKonsolu{
	Oyun* oyun[3];
	static int x;
	public:
		void basla();
	    void bitir(){system("pause");}
	    void oyunAta(Oyun* e);
};
int OyunKonsolu::x = 0;
void OyunKonsolu::oyunAta(Oyun* e){
	oyun[x] = e;
	x++;
}
void OyunKonsolu::basla(){
	for(int i=0;i<x;i++){
		Oyun* e = oyun[i];
		e -> oyna();
	}
}
class Mario:public Oyun{
	public:
		Mario(){isim="Mario";}
		void oyna();
};
void Mario::oyna(){
	cout<<isim<<" oynaniyor.."<<endl;
}
class Tetris:public Oyun{
	public:
		Tetris(){isim="Tetris";}
		void oyna();
};
void Tetris::oyna(){
	cout<<isim<<" oynaniyor.."<<endl;
}
class yeniOyun:public Oyun{
	public:
	void oyna();
};
class Bloklar:public yeniOyun{
	public:
	Bloklar(){isim="Bloklar";}
	void bloklarOyna();
};
void yeniOyun::oyna(){
	cout<<isim<<" oynaniyor..";
}

int main()
{
	OyunKonsolu konsol;
	Mario mario;
	Tetris tetris;
	Bloklar blok;
	konsol.oyunAta(&mario);
	konsol.basla();
	konsol.oyunAta(&tetris);
	konsol.basla();
	konsol.oyunAta(&blok);
	konsol.basla();
	return 0;
}
