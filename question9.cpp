#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Indiquez votre age\n";
	cin >> num;
	if (num < 6){
		cout << "Vous etes trop jeune !\n";
	}
	switch(num){
		case 6:
		case 7:
			cout << "Categorie ";
			cout << "Poussin\n";
			break;
		case 8:
		case 9:
			cout << "Categorie ";
			cout << "Pupille\n";
			break;
		case 10:
		case 11:
			cout << "Categorie ";
			cout << "Minime\n";
			break;
	}
	if (num > 11){
		cout << "Categorie ";
		cout << "Cadet\n";
	}
	//Oui c'est possible d'avoir plusieurs algorithmes, avec des if else if, ou des switch ou une combinaison comme ici
}