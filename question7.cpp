#include <iostream>
using namespace std;
int main(){
	int num, num2;
	cout << "Entrez un nombre\n";
	cin >> num;
	cout << "Entrez un autre nombre\n";
	cin >> num2;
	if (num * num2 >= 0){
		cout << "Votre produit est positif\n";
	}else{
		cout << "Votre produit est negatif\n";
	}
}