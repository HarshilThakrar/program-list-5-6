//Single inheritance
#include<iostream>
using namespace std;
class Vehicle
{
		public:
			Vehicle()
			{
				cout<<"This is vehicle"<<endl;
			}
		
};
class car : public Vehicle
{
	public:
			car()
			{
				cout<<"This is a car"<<endl;
				}	
};
int main()
{
	
	car obj;

	return 0;
}
