#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Entrez un nombre\n";
	cin >> num;
	int stop = num + 10;
	while (num != stop){
		num++;
		cout << num << endl;
	}
}