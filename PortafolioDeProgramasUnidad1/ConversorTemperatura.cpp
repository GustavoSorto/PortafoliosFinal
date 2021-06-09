#include "temperatura.h"

using namespace std;

int main(){

	char continuar;
	
	do{
		int tipoConversion = leerConversion();
		double temperatura = leerTemperatura();
		ConversionDeTemperatura( tipoConversion, temperatura);
		
		cout << "\n�Desea converir otra temperatura? (y/n):";
		while(!(cin >> continuar)){
			cout << "Seleccione 'y'  para continuar 'n' para terminar: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}
   while(continuar == 'y');
    return 0;
}
