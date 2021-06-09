#ifndef TEMPERATURA_TEMPERATURA_H
#define TEMPERATURA_TEMPERATURA_H

#include <iostream>

using namespace std;

int leerConversion() 
{
    int Conversion;

    cout << "* Conversor de temperaturas *" << endl;
    cout << "1 - De Celsius a fahrenheit" << endl;
    cout << "2 - De Celsius a Kelvin" << endl;
    cout << "3 - De Fahrenheit a Celsius" << endl;
    cout << "4 - De Fahrenheit a Kelvin " << endl;
    cout << "5 - De Kelvin a Celsius" << endl;
    cout << "6 - De Kelvin a Fahrenheit" << endl;
    cout << "seleccione el tipo de conversion";

    while(!(cin >> Conversion) || Conversion < 1 || Conversion > 6)
    {
        cout << "Ingrese un valor entre 1 y 6: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    return Conversion;
}
 
double leerTemperatura()
{
	double temperatura;
	cout << "Ingrese la temperatura a convertir: ";
	
	while(!(cin >> temperatura))
	{
		cout << "Ingrese un valor de temperatura: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	
	return temperatura;
}

double ConversionDeTemperatura(int tipoDeConversion, double temperaturaEstablecida)
{
	double temperaturaConvertida;
	
	switch(tipoDeConversion){
		case 1:
			//C -> F
			temperaturaConvertida = 1.8 * temperaturaEstablecida + 32;
			cout << "La temperatura" << temperaturaEstablecida << "C equivale a" <<temperaturaConvertida << "F." << endl;
			break;
		case 2:
			//C -> K
			temperaturaConvertida = temperaturaEstablecida + 273.15;
			cout << "La temperatura" << temperaturaEstablecida << "C equivale a" <<temperaturaConvertida << "K." << endl;
			break;
		case 3:
			//F -> C
			temperaturaConvertida = (temperaturaEstablecida - 32)/1.8;
			cout << "La temperatura" << temperaturaEstablecida << "F equivale a" <<temperaturaConvertida << "C." << endl;
			break;
		case 4:
			//F -> K
			temperaturaConvertida = (5/9) * (temperaturaEstablecida - 32) + 273.15;
			cout << "La temperatura" << temperaturaEstablecida << "F equivale a" <<temperaturaConvertida << "K." << endl;
			break;
		case 5:
			//K -> C
			temperaturaConvertida = temperaturaEstablecida - 273.15;
			cout << "La temperatura" << temperaturaEstablecida << "K equivale a" <<temperaturaConvertida << "C." << endl;
			break;
		case 6:
			//K -> F
			temperaturaConvertida = (1.8*(temperaturaEstablecida - 273.15)) + 32;
			cout << "La temperatura" << temperaturaEstablecida << "K equivale a" <<temperaturaConvertida << "F." << endl;
			break;
		default:
			cout << "Opcion no valida";
			break;
	}
	
	return temperaturaConvertida;
	
}
#endif
