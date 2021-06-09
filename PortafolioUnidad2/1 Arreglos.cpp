#include <iostream>

using namespace std;

void imprimirArreglos(int numeros []){
	for (int i = 0; i < 5; ++i){
		cout << "numeros[" << i << "] : ";
		
	}
	cout << endl;
		
}

int main(){
	
	int numeros [5] = {19, 10 ,8,17,9};
	
	imprimirArreglos(numeros);
	
	numeros [3] = 35;
	
	imprimirArreglos(numeros);
	
	cout << "Ingrese el valor de numeros [4]:";
	cin >> numeros [4];
	
	imprimirArreglos(numeros);
	
	cout << endl;
	for (int n : numeros){
		cout << n << " "<< endl;
	}
	return 0;
	
	

	
}
