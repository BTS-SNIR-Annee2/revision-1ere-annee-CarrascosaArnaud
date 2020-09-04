#include <iostream>
using namespace std;
int main(){
	int a = 1;
	int b = 3;
	int temp=0;
	cout << " a " << a << " b " << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << " a " << a << " b " << b << endl;
}