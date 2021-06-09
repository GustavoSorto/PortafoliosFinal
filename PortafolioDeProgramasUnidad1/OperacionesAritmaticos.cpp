//Autor Gustavo Emilio Sorto Espinal
#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	cout << "*** Calcula operaciones aritmeticas de dos numeros ***\n";
	
	cout << "Inserte numero: ";
	cin >> x;
	
	cout << "Inserte segundo numero: ";
	cin >> y;
	
	cout << "Suma: " << x + y << endl;
	cout << "Resta: " << x - y << endl;
	cout << "Multiplicacion: " << x * y << endl;
	cout << "Division: " << x / y << endl;
	cout << "Residuo de division: " << x % y << endl;
	
	++x;
	++y;
	cout << "Incremento en uno: " << " x=" << x << " y=" << y << endl;
	
	--x;
	--y;
	cout << "Decremento en uno: " << " x=" << x << " y=" << y << endl;
	
	return 0;
}


