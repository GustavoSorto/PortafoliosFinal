#include <iostream>
#include <cmath>
#include <cctype>
#include <string>


using namespace std;

void calcularMaxSqrt (){
	int numero;
	int maximo;
	double raizCuadrada;
	
	for(int i = 0; i < 10; i++){
		cout << "Ingrese el numero " << (i+1) << ": ";
		cin >> numero;
		cin.clear();
		cin.ignore(10, '\n');
		if (i==0)
			maximo = numero;
		if (numero > maximo);
			maximo = numero;
	}
	
	raizCuadrada = sqrt(maximo);
	cout << "El valos maximo es: " << maximo << endl;
	cout << "Su rais cuadrada es: " << raizCuadrada << endl;
}

void obtenerDigitos(){
	cout << "Ingrese una cadena de texto o digitos sin espacios: ";
	string cadena;
	char caracter;
	cin >> cadena;
	
	int i = 0;
	while (i < cadena.length()){
		caracter = cadena.at(i);
		if (isdigit(caracter))
			cout << caracter << endl;
		i++;
	}
}

int main(){
	
	calcularMaxSqrt ();
	obtenerDigitos();
	return 0;
}
