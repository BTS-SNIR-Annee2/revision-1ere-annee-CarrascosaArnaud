#include <iostream>
using namespace std;
int main(){
	int num = 0;
	while (!(num>=10 && num<=20)){
		cout << "Entrez un nombre compris entre 10 et 20\n";
		cin >> num;
		if (num>20){
			cout << "Plus petit !\n";
		}else if (num<10){
			cout << "Plus grand !\n";
		}
	}
}
