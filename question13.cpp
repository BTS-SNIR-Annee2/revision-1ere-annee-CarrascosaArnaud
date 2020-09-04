#include <iostream>
using namespace std;
int main(){
	int num, i, max = -9999, position;
	for (i = 0; i < 20; i++){
		cout << "Entrez un nombre\n";
		cin >> num;
		if (max < num){
			max = num;
			position = i+1;
		}
	}
	cout << "Le plus grand chiffre etait " << max << " et c'etait le nombre numero " << position << endl;
}