#include <iostream>
using namespace std;

int main(){
	int n =  100000;
	int aux = 2, aux1 = 0, i = 0, j = 1, vet[n], temp = 0;

	cout << "Preenchendo o vetor!!! " << endl;
	for(int k = 100000; k >= 0; k--){
		vet[temp] = k;
		temp++;
	}

	cout << "Vetor desordenado: ";
	for(int x = 0; x <=n; x++){
		cout << vet[x] << ", " << '\t' ;
	}
	cout << endl;

	while(j<=n){
		if(i<0){
			i = aux - 1;
			j = aux;
		}
			if(vet[j] < vet[i]){
				aux1 = vet[i];
				vet[i] = vet[j];
				vet[j] = aux1;
				i--;
				j--;
			} else {
			i++;
			j++;
		}
	}
	cout << "---------------------------------" << endl;
	cout << "Vetor ordenado: ";
	for(int y = 0; y <=n; y++){
		cout << vet[y] << "," << '\t';
	}
	cout << endl;
}
