#include <iostream>
using namespace std;
int main(){
	int tab1[5] = {1,2,3,4,10};
	int tab2[5] = {10,20,30,40,5};
	int tab3[5];
	int i;
	for (i = 0; i<5; i++){
		tab3[i] = tab1[i]+tab2[i];
		cout << tab3[i] << endl;
	}
}