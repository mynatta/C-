#include <iostream>
using namespace std ;
void edit_arr(int a[4]);
int main() {
	int num[4] = {2,5};
	edit_arr(num);
	for(int i=0;i<4;i++)
		cout<<num[i]<<endl;
	return 0;
}
void edit_arr(int a[4]) {
	for(int i=0;i<4;i++)
	a[i] = a[i]*a[i];
}