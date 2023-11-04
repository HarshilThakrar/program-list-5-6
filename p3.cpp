//Multiple inheritance
#include<iostream>
using namespace std;
class vehicle
{
	public:
			vehicle()
			{
				cout<<"This is the vehicle class"<<endl;
			}
};
class Fourwheeler
{
	public:
			Fourwheeler()
			{
				cout<<"This is the Fourwheeler class"<<endl;
			}
};
class car : public vehicle, public Fourwheeler
{
	public:
			car()
			{
				cout<<"This is the class car"<<endl;
			}
};
int main()
{
	car obj;
	vehicle v;
		Fourwheeler f;
	return 0;
}

