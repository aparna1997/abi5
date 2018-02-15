#include<iostream>
using namespace std;
class Greater1
{
	public:
	int a,b,c;
	void get1()
	{
		
		cout<<"enter a,b,c";
		cin>>a>>b>>c;
	}
	public:
	void display1()
	{
		if(a>b)
		{
			if(a>c)
			{
				cout<<"a is greater";
			
		}
		else
		{
			cout<<"c is greater";
		
		}
		}
		if(b>c)
		{
			cout<<"b is greater";
		}
		}
		
		
	
};
int main()
{
	Greater1 g;
	g.get1();
	g.display1();
	return 0;
}
