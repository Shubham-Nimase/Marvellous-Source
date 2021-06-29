#include<iostream>

using namespace std;

class demo
{
public:
	int i;
	int j;

	demo()
	{
		cout << "inside default constructor\n";
	}

	demo(int i, int j)
	{
		cout << "inside parameterised constructor\n";
	}


	void fun()
	{
		cout << "inside fun\n";
	}

	void gun()
	{
		cout << "inside gun\n";
	}
	~demo()
	{
		cout << "inside destructor\n";
	}
};

int main()

{
	cout << "inside main\n";
	cout << "\n";

	demo *obj = new demo(21, 51);
	demo *obj1 = new demo();
	cout << "\n";
	obj->fun();
	cout << "\n";
	obj1->fun();
	obj1->gun();
	cout << "\n";
	delete obj1;
	cout << "\n";
	obj1->fun();
	obj1->gun();

}