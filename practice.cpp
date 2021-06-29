using namespace std;
#include<iostream>


class Maths        //class declaration (Encapsulation)
{
private:           //Access specifier (abstraction)
	int no1;      //characteristics
	int no2;

public:         //access specifier
	Maths()     //default constructor
	{
		this->no1 = 0;
		this->no2 = 0;
	}

	Maths(int value1, int value2)  //Parametrise Constructor
	{
		this->no1 = value1;
		this->no2 = value2;
	}

	Maths(Maths& ref)  //copy constructor
	{


	}

	~Maths()     //Destructor
	{
		cout << "Inside Destructor\n";
	}

	int add()    //Behaviour
	{
		int ans = 0;
		ans = this->no1 + this->no2;
		return ans;
	}

	int sub()    //Behaviour
	{
		int ans = 0;
		ans = this->no1 - this->no2;
		return ans;
	}

};     //End of class declaration

int main()
{
	cout << "Inside main";
	
	Maths obj1;       //Default
	Maths obj2(20, 5);  //Parametrise
	Maths obj3(obj2);    //copy

	int ret = 0;

	ret = obj2.add();
	cout << "Addition is" << ret << "\n";

	ret = obj2.sub();
	cout << "Substraction is" << ret << "\n";


	return 0;
}

