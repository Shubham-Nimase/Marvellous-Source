#include <iostream>
using namespace std;
class Dhiraj
{
public:
	void fun();
	
};

class Shubham
{
public:
	int i;
private:
	int j;
protected:
	int k;

public:
	Shubham()
	{
		i = 10; j = 20; k = 30;
	 }

	friend class Dhiraj;

};
void Dhiraj::fun()
{
	Shubham obj;
	cout << obj.i << "\n";
	cout << obj.j << "\n";
	cout << obj.k << "\n";
}

int main()
{
	Dhiraj dobj;
	dobj.fun();
 }

