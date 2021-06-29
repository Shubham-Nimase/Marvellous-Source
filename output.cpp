
//Function Overloading Program -->> fun();

#include<iostream>
using namespace std;
class Demo
{
public:
	int i;
	int j;
	Demo()
	{
		cout << "yes boss\n";
	}

	~Demo()
	{
		cout << "No boss\n";
	}
	void fun(int i)
	{
		cout<<"First defination\n";
	}
	void fun(int i,int j)
	{
		cout<<"second defination\n";
	}
};
int main()
{
	cout << "Inside main\n";

	Demo *obj=new Demo;
	
	obj->fun(51);
	obj->fun(21,51);

	delete obj;
return 0;
}