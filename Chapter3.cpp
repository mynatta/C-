#include <iostream>
using namespace std;
int main () {
	/*int n ;
	cout << " Enter interger number : " ;
	cin >> n ;
	cout << endl ;
	cout << " n = " << n << endl ;
	cout << " n >> 1 = " << ( n >> 1 ) << endl ;
	cout << " n << 1 = " << ( n << 1 ) << endl ;
	cout << " n & 8  = " << ( n & 8  ) << endl ;
	cout << " n | 15 = " << ( n | 15 ) << endl ;
	cout << " n ^ 10 = " << ( n ^ 10 ) << endl ;
	int n1, n2, n3 ;
	cout << " Enter first number  : " ;
	cin >> n1 ;
	cout << " Enter second number : " ;
	cin >> n2 ;
	cout << " Enter third number  : " ;
	cin >> n3 ;
	float average ;
	average = static_cast<float>(n1+n2+n3)/3 ;
	cout << endl ;
	cout << " Average of 3 numbers = " << average << endl ;*/
	cout << "--------------- QUIZZES --------------- " <<endl ;
	int q1, q2, q3 ,mt , fn ;
	cout << " Enter first quizz (10)  : " ;
	cin >> q1 ;
	cout << " Enter second quizz (10) : " ;
	cin >> q2 ;
	cout << " Enter third quizz (10)  : "  ;
	cin >> q3 ;
	cout << "============== MID-TERM =============== " << endl ;
	cout << " Enter mid-term (40) : "  ;
	cin >> mt ;
	cout << "============== FINAL ================== " << endl ;
	cout << " Enter final (50) : " ;
	cin >> fn ;
	cout << endl ;
	float quizztotal ;
	quizztotal = float(q1+q2+q3)/3 ;
	float all ;
	all = quizztotal+mt+fn ;
	cout << endl ;
	cout << " Quizz total = " << quizztotal << endl ;
	cout << " Mid-term    = " << mt << endl ;
	cout << " Final       = " << fn << endl ;
	cout << " Total       = " << all << endl ;
	cout << " Your score is " << ((all > 60 ) ? "Pass!" : "Fail!" ) << endl ;






}