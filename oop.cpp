using namespace std;

#include<iostream>

class Maths
{
private:
	int no1;            //characteristics
	int no2;           //characteristics
public:
	Maths()           //default constructore
	{
		cout << "Inside Default constructore \n";
		this->no1 = 0;
		this->no2 = 0;
	}

	Maths(int value1, int value2)
	{
		cout << "Inside parameterised constructore \n";
		this->no1 = value1;
		this->no2 = value2;

	}

	Maths(Maths &ref)           //copy constructore
	{
		cout << "Inside copy constructore\n";
	}

	~Maths()
	{
		cout << "Inside destructore \n";
	}

	int Add()    //Behaviour
	{
		int Ans = 0;
		Ans = this->no1 + this->no1;
	    return Ans;
	}
	 
	int sub()
	{
		int Ans = 0;
		Ans = this->no1 - this->no2;
		return Ans;
	}
	
};

int main ()
{
	cout << "Inside Main \n";

	Maths obj1;  //default
	Maths obj2(10, 20); //parameterised
	Maths obj3(obj2);  //copy

	int ret = 0;
	
	ret = obj1.Add();
	cout << "Addition is" << ret << "\n";

	ret = obj2.Add();
	cout << "Addition is" << ret << "\n";

	return 0;

}