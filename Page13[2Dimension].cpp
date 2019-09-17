#include<iostream>
using namespace std;
int main()
{
	int score[4][2];
	cout<<"input score"<<endl;
	for ( int i = 0; i < 2; i++) 
	{
		cout <<"Enter subtest  "<< i+1 <<"  : ";
		cin>>score[i][0];
		cout <<"Enter midteam  "<< i+1 <<"  : ";
		cin>>score[i][1];
		cout <<"Enter final    "<< i+1 <<"  : ";
		cin>>score[i][2];
		cout <<endl;
	}

	cout<<"Display score "<<endl;
	cout <<"----------------------------------"<<endl;
	cout<<"subtest\tMidterm\tfinal\ttotal"<<endl;
	cout <<"----------------------------------"<<endl;
	for ( int i = 0; i < 2; ++i) 
	{
		for (int j = 0; j < 4; ++j)
		{
			cout <<score[i][j]<<"\t";

		}

		cout<<endl;
	}

	return 0;
}