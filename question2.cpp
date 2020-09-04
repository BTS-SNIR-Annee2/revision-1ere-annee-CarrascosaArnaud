#include <iostream>
using namespace std;
int main(){
	int c = 2;
	int d = 5;
	int e = 10;
	int temp=0;
	cout << " c " << c << " d " << d << " e " << e << endl;
	temp = c;
	c = d;
	d = e;
	e = temp;
	cout << " c " << c << " d " << d << " e " << e << endl;
}