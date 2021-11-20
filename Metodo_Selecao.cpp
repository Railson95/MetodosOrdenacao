#include <iostream>
using namespace std;

int main(){
	int n = 6;
	int i, k, indiceAtual, menor, vet[n], num;
	i = 0;
	indiceAtual = 0;

	//preenchendo vetor
	for(int aux = 0; aux <= n; aux++){
		cout << "Digite um numero: ";
		cin >> num;
		vet[aux] = num;
	}

	cout << "Vetor desordenado!!! " << endl;
	for(int aux1 = 0; aux1 <= n; aux1++){
		cout << vet[aux1] << " ,";
	}
	cout << endl;

	cout << "---------" <<endl;

	while(i<n){
		menor = vet[i];
		//acha menor elemento no vetor
		for(k = i; k < n; k++){
			if(vet[k+1] < menor){
				menor = vet[k+1];
				indiceAtual = k+1;
			}
		}
		//reorganiza o vetor
		while(indiceAtual>i){
			vet[indiceAtual] = vet[indiceAtual - 1];
			indiceAtual--;
		}
		//joga o menor elemento na primeira posição do vetor
		vet[i] = menor;
		i++;
	}
	cout << "Vetor ordenado!!! " << endl;
	for(int aux2 = 0; aux2 <= n; aux2++){
		cout << vet[aux2] << " ,";
	}

	cout << endl;
}