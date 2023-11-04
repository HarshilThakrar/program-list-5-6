//p-8 write a text file test.txt using c++ filestream programming.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file1("dsu.txt");
	if(file1.is_open())
	{
		file1<<"Welcome to the Dr. Subhash University"<<endl;
		file1<<"This is C++ Subject."<<endl;
		file1<<"Hello.."<<endl;
		cout<<"File is created..;)";
		file1.close();
	}
	else
	{
		cout<<"File Opening is fail";
		
	}
	return 0;
}
