using namespace std;
#include<iostream>

class Demo
{
public:
	const int i;
    int j;
	Demo(int a = 11, int b = 21) :i(a) //member initialisation list
	{
		j = b;
}
};

int main()
{
	Demo obj(20, 30);
	cout << obj.i << "\n";
	cout << obj.j << "\n";

	return 0;
}