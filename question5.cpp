#include <iostream>
using namespace std;
int main(){
	int article = 0;
	int nbArticle = 0;
	int TVA = 0;
	cout << "Choisissez le prix d'un article\n";
	cin >> article;
	cout << "Choisissez leur nombre\n";
	cin >> nbArticle;
	cout << "Choisissez le taux de TVA\n";
	cin >> TVA;
	cout << "Le prix de l'article a l'unite est de " << article << " € HT.\nAvec taxes elle est de " <<
		article*TVA/100+article << " €TTC.\n";
	cout << "Le total est donc de " << (article*nbArticle)*TVA/100+(article*nbArticle) << "€ TTC\n";
	/*
	float articles[4] = {30, 25, 100, 50};
	float totalHT = 0, totalTTC = 0;
	int TVA = 10;
	int i;

	for (i = 0; i < 4; i++){
		cout << "Prix de l'article " << i << " HT = " << articles[i] << " €\n";
		totalHT+=articles[i];
	}
	cout << "Il y a donc " << i << " articles. Leur prix total est de " << totalHT << " €.\n";
	cout << "La TVA est de " << TVA << "%\nLeur prix passe donc à :\n";
	for (i = 0; i< 4; i++){
		cout << "Prix de l'article " << i << " TTC = " << articles[i]*TVA/100+articles[i] << " €\n";
		totalTTC +=(articles[i]*TVA/100+articles[i]);
	}
	cout << "Leur prix total est de " << totalTTC << " €.\n";
	*/
}