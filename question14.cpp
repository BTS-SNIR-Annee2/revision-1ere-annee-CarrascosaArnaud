#include <iostream>
using namespace std;
int main(){
	int n;
	int factoN = 1;
	int factoK = 1;
	int factoP = 1;
	int p;
	int i;
	cout << "Entrez le nombre de chevaux partants\n";
	cin >> n;
	cout << "Entrez le nombre de chevaux joues\n";
	cin >> p;
	int k = n-p;
	for (i = 0; i < n; i++){
		factoN *= n-i;
	}
	cout << "n" << factoN << endl;
	for (i = 0; i < k; i++){
		factoK *= k-i;
	}
	cout << "k" << factoK << endl;
	for (i = 0; i < p; i++){
		factoP *= p-i;
	}
	cout << "p" << factoP << endl;
	float x = factoN / factoK;
	float y = factoN / (factoP * factoK);
	cout << "une chance sur " << x << endl << "une chance sur " <<y << endl;
}