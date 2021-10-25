#include <iostream>
class Test
{
	private:
		int deg1;
		const int deg2;
		int &deg3;
		void degistir()
		{
			cout<<"merhaba";
		}
		public:
			Test (int);
			int bir()const
			{
				cout<<"hoscakal";
				deg1*=2;
			}
			int iki() const
			{
				return deg1;
			}
};
Test::Test (int s):deg2(s) 
{
	deg1=s;
    deg3=s;
}
int main()
{
	Test t(5);
	const Test z(10);
	t.deg1=8;
	int k=t.iki();
	t.degistir();
	cout<<z.iki ();
	return 0;
}
