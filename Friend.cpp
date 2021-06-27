#include<iostream>
using namespace std;
//necked function can be friend of our class

class Shubham
{
public:
	int helmate;
private:
	int atm;
protected:
	int wallet;

public:
	Shubham()
	{
		helmate = 1; atm = 10000; wallet = 1500;
	}

	friend void Dhiraj();
};

void Dhiraj()
{
	Shubham obj;
	cout << obj.helmate << "\n";
	cout << obj.atm << "\n";
	cout << obj.wallet << "\n";
}

int main()
{
	Dhiraj();

	return 0;
}
