using namespace std;

#include<iostream>
class Demo
{
public:
	int x;
	int y;

	void max()
	{
		if (x > y)
			cout << "maximum number is " << x;
		else
			cout << "maximum number is" << y;

	}

};
int main()
{
	Demo obj;
	obj.x = 12;
	obj.y = 10;

	obj.max();

		return 0;

}


