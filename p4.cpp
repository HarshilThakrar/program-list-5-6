#include<iostream>
using namespace std;
class parent1
{
	public:
			parent1()
			{
				cout<<"Inside 1st base class parent-1"<<endl;
			}
};
class parent2
{
	public:
			parent2()
			{
				cout<<"Inside 2nd base class parent-2"<<endl;
			}
};
class child : public parent2, public parent1
{
	public:
			child()
			{
				cout<<"Inside this is child class"<<endl;
			}
};
int main()
{
	child obj;
	return 0;
}
