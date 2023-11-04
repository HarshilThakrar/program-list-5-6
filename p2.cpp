//Multilevel inheritance
#include<iostream>
using namespace std;
class Vehicle
{
	public:
			Vehicle()
			{
				cout<<"This is a Vehicle"<<endl;
			}
};
class fourWheeler : public Vehicle
{
	public:
			fourWheeler()
			{
				cout<<"fourwheeler are Vehicle"<<endl;
			}
};
class car : public fourWheeler
{
	public:
			car()
			{
				cout<<"Car is a vehicle"<<endl;
			}

};
int main()
{
	car obj;
	fourWheeler f;
	return 0;
}
