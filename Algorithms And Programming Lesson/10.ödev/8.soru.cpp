#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int rakam[6],satir=1;
	bool hesap=false;
	ifstream okuyucu("örnek.txt",ios::in);
	while(!okuyucu.eof()){
		for(int i=0;i<6;i++){
		okuyucu>>rakam[i];
}
for(int i=0;i<6;i++){
if(rakam[i]>rakam[i+1])	
		hesap=true;
	}
if(hesap)
cout<<satir<<". satir sirali yazilmamistir"<<endl;
else
cout<<satir<<". satir sirali yazilmistir"<<endl;
satir++;
hesap=false;
}
    okuyucu.close();
	return 0;
}
