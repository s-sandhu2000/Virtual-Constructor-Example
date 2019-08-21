#include <iostream>
using namespace std;

class Base
{
public:
	static Base *Create(int input);
	Base()
	{
		cout<<"Creation of Base class."<<endl;
	}
	virtual 
	~Base()
	{
		cout<<"Destroying Base Class."<<endl;
	}

}
class Child : public Base
{
public:
	Child()
	{
		cout<<"Creation of the child class."<<endl;
	}
	~Child()
	{
		cout<<"Destroying child class."<<endl;
	}
}
class Child2 : public Base
{
public:
	Child2()
	{
		cout<<"Creation of the child2 class."<<endl;
	}
	~Child2()
	{
		cout<<"Destroying child2 class."<<endl;
	}
}
Base *Base::Create(int input)
{
	if (input==1)
	{
		return new Child;
	}
	else if(input==2)
	{
		reutrn new Child2;
	}
}
class User 
{
private:
	Base *base;
public:
	User():base(0)
	{
		int input;
		cout<<"Enter input"<<endl;
		cin>>input;
		while ((input!=1)&&(input!=2))
		{
			cout<<"Please enter a valid input please."<<endl;
			cin>>input;
		}
		base=Base::Create(input);

	}
	~User()
	{
		if(base)
		{
			delete base;
			base=0;
		}
	}
};
