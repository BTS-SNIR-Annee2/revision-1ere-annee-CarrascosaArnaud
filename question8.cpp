#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Entrez un nombre\n";
	cin >> num;
	if (num > 0){
		cout << "Votre nombre est positif\n";
	}else if (num < 0){
		cout << "Votre nombre est negatif\n";
	}else{
		cout << "Votre nombre est egal a 0\n";
	}
}