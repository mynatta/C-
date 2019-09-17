#include<iostream>
#include<iomanip>
using namespace std ;
void display(int *salary,int num);
int cal_bonus(int salary);
int main ()
{
	int num = 1 ;
	cout <<"Enter the number of staff : ";
	cin >> num;
	int *salary = new int[num];
	for(int i=1;i<=num;i++)
	{
		cout <<"Enter the salary ["<< i <<"]: ";
		cin >> salary[i] ;
	}
	display(salary,num);
	system("pause") ;
	return (0);
}
void display(int salary[],int num)
{
	cout <<"-------------------------------------------------------------"<< endl ;
	cout << "There are " << num << " person" << endl ;
	for(int i=1;i<=num;i++)
	{
		cout << "The Salary for person ["<< i <<"] = "<< salary[i] << " and Bonus = " << cal_bonus(salary[i]) << endl;
	}
}
int cal_bonus(int salary)
{
	return (salary*2);
}



