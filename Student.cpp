#include<iostream>
#include<string>
using namespace std;
char Calgrade(int);
void ListStudent(int,string,int,int);
void main()
{
	string name[100];
	int score[100];
	int ns,c=1;
	
	cout << "Input Number of Student : ";
	cin >> ns;
	for(int i = 1 ; i <= ns ; i++)
	{
		cout << "Input Name : ";
		cin >> name[i];
		cout << "Input Score [" << i << "]: ";
		cin >> score[i];
		cout << "\n";
	}
	for(int i =1 ; i<= ns ; i++)
	{
		ListStudent(ns,name[i],score[i],c);
			c++;
	}


}
void ListStudent(int ns,string name, int score, int c){
	
	cout << "Student Name :" << name << " Score [" << c << "]:" << score << " Your grade is " << Calgrade(score)<<"\n";
	
}
char Calgrade(int score)
{ char grade ;
	if(score < 101 && score >79){ grade = 'A';}
	else if(score <80 && score >69){ grade = 'B';}
	else if(score <70 && score >59){ grade ='C';}
	else { grade = 'D';}
	return(grade);
}