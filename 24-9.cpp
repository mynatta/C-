#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<time.h>
using namespace std ;
int main ()
{
	string Filename, name ;
	ifstream InFile ;
	ofstream OutFile ;
	int Score ;
	srand(time(0)) ;
	cout << "Enter File Name : " ;
	cin >> Filename ;
	cout << endl ;
	//open out put file for write data
	OutFile.open(Filename.c_str(),ios_base::out|ios_base::app) ;
	cout << "Now open file" << Filename <<" for write" << endl ;
	//Get name from keyboard
	for ( int n = 1 ; n <= 3 ; n++ )
	{
		//Value = rand() % 100;
		cout << "Input name" << n << ":" ;
		cin >> name ;
		cout << "Input score" << n << ":" ;
		cin >> Score ;
		//cout << setw(5) << Value ;
		//Write value ( integer number ) to out put file
		//OutFile << Value << " " ;
		OutFile << name << " " << Score << endl ;
	}
	cout << endl ;
	OutFile.close() ;          //close output file

	cout << "Now close file" << Filename << ".\n\n" ;
	//open input file for read data
	InFile.open(Filename.c_str(),ios_base::end) ;
	cout << "Now open file" << Filename << "for read." << endl ;
	cout << "Name :   Score" << endl ;
	//Read name from input file
	//for (int n = 1 ; n <= 10 ; n++ )
	while(!InFile.eof())
	{
		//InFile >> Value ;
		//InFile >> name ;
		getline(InFile,name);
		if(name.empty())break;
		cout << "Name : " << name << endl ;
		//cout << setw(5) << Value ;

	}
	cout << endl ;
	InFile.close() ;           //close output file
	cout << "Now close file" << Filename << ".\n\n" ;
	return(0);
}
