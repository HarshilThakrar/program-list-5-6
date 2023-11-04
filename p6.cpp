//Runtime polymorphishm without virtual keyword
#include<iostream>
using namespace std;
class Animal
{
	public:
			void eat()
			{
				cout<<"Eating... ;) "<<endl;
			}
};
class Dog : public Animal
{
	public:
			void eat()
			{
				cout<<"Dog eating bread ... ;) "<<endl;
			}
};
int main()
{
	Dog d=Dog();
	d.eat();
	return 0;
}
