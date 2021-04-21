#include<iostream> //bentuk inheritance

using namespace std;

class angka
{
protected:
	int bil, hasil;
public:
	void set_values(int bil)
	{
		this->bil=bil;
	}
	void print()
	{
		cout<<hasil<<endl;
	}
};

class kuadrat:public angka
{
public:
	void hitungkuadrat()
	{
		hasil=bil*bil;
	}
};

class kubik:public angka
{
public:
	void hitungkubik()
	{
		hasil=bil*bil*bil;
	}
};

int main()
{
	kuadrat obj1;
	obj1.set_values(4);
	cout<<"hasil kuadrat : ";
	obj1.hitungkuadrat();
	obj1.print();

	kubik obj2;
	obj2.set_values(4);
	cout<<"hasil kubik : ";
	obj2.hitungkubik();
	obj2.print();

	return 0;

}
