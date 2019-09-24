#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std ;
int Menu() ;
void AddStudent (string FN) ;
void DisplayStudent(string FN);

int main()
{
	const string Filename = "student.dat" ;
	ifstream InFile ;
	ofstream OutFile ;
	int c ;
	do
	{
		system("cls") ;  //call external command
		c = Menu() ;
		switch(c)
		{
			case 1 : AddStudent(Filename) ; break ;
			case 2 : DisplayStudent(Filename) ; break ;
		}
	}
	while (c != 0) ;
	cout << "Exit Program." << endl ;
	return(0) ;
}
int Menu()
{
	string line(25,'=') ;
	int Choose ;
	cout << "Program Add-Display Student Data\n" ;
	cout << line << endl ;
	cout << ": Main Menu		:\n" ;
	cout << line << endl ;
	cout << ": 0 - Exit :\n" ;
	cout << ": 1 - Add Student :\n" ;
	cout << ": 2 - Display Student :\n" ;
	cout << line << endl ;
	cout << "Enter Choose : " ;
	cin >> Choose ;
	return(Choose) ;
}
void AddStudent(string FN) 
{
	//open file for write and append
	ofstream OutFile((FN.c_str()), ios_base::out|ios_base::app) ;
	if (OutFile.is_open())
	{
		string ID, Name ;
		float BMI, Weight, Height ;
		cout << "\n Add Student \n" ;
		cout << "Enter ID : " ;
		cin >> ID ;
		cout << "Enter Name : " ;
		cin >> Name ;
		cout << "Enter Weight : " ;
		cin >> Weight ;
		cout << "Enter Height : " ;
		cin >> Height ;
		BMI = Weight/((Height/100)*(Height/100)) ;
		//write data to file student.dat
		OutFile << ID << " " << Name << " " << Weight << " " << Height << " " << BMI << endl ;
		OutFile.close() ;
		cout << "\nSaved Already.\n" ;
		system("pause") ;
	}
	else
		cout << "File Could not opened. " << endl ;
}
void DisplayStudent(string FN)
{
	//open file for read
	ifstream InFile(FN.c_str(), ios_base::in) ;
	if (InFile.is_open())
	{
		string ID, Name ;
		float BMI, Weight, Height ;
		string line(100,'=') ;
		int n = 0 ;
		cout << "\nList Student\n" ;
		cout << line << endl ;
		cout << " No.  ID \t\t Name \t\t Weight \t\t Height \t\t BMI\n" ;
		cout << line << endl ;
		//read data from file student.dat
		InFile >> ID >> Name >> Weight >> Height >> BMI ;
		
		while(!InFile.eof())
		{
			n = n + 1 ;
			cout << right << setw(3) << n << " : " ;
			cout << left << setw(6) << ID ;
			cout << " \t\t " << Name ; 
			cout << " \t\t  " << Weight ;
			cout << " \t\t           " << Height ;
			cout << " \t\t        " << fixed << setprecision(2) << BMI << endl ;
			InFile >> ID >> Name >> Weight >> Height >> BMI ;
		}
		InFile.close() ;
		system("pause") ;
	}
	else
		cout << "File Could not opened." << endl ;
}