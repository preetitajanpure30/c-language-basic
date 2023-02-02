//program for file handling
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string name;
	ofstream fout("sample.txt");
	fout<<"Hello\n";
	fout<<100<<" "<<3.14<<" "<<'A';
	cout<<"enter name";
	cin>>name;
	fout<<name;
	fout.close();
	
	ifstream fin("sample.txt");
	char ch;
	while(!fin.eof())
	{
		ch=fin.get();
		cout<<ch;
	} 
}
