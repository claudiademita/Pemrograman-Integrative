#include<iostream>//inheritance conctructor 1

using namespace std;

class angka
{
protected:
	int bil, hasil;
public:
	angka(int bil)
	{
		this->bil=bil;
	}
	void print()
	{
		cout<<hasil<<endl;
	}
	~angka(){}
};

class kuadrat:public angka
{
public:
	kuadrat(int bil):angka(bil)
	{
		hasil=bil*bil;
	}
};

class kubik:public angka
{
public:
	kubik(int bil):angka(bil)
	{
		hasil=bil*bil*bil;
	}
};

int main()
{
	kuadrat obj1(4);
	cout<<"hasil kuadrat : ";
	obj1.print();

	kubik obj2(4);
	cout<<"hasil kubik : ";
	obj2.print();

	return 0;

}
