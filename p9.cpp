//p-9 Reading from a text file dsu.txt using c++ filestream programming.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string srg;
	ifstream file1("dsu.txt");
	if(file1.is_open())
	{
		while(getline(file1,srg))
		{
			cout<<srg<<endl;
		}
		file1.close();
	}
	else
	{
		cout<<"File opening is fail/File is not available"<<endl;
	}
	return 0;
}
