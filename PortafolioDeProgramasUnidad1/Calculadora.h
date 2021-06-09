#ifndef CALCULADORA_H
#define CALCULADORA_H 

#include <iostream>
#include <string>
using namespace std; 

const double pi = 3.141592653589793238;

double sumar (double x, double y){
	return x + y ;	
}

double restar (double x, double y){
	return x - y ;
}

double multiplicar (double x,double y){
	return x * y ;
} 

double dividir (double x,double y){
	return x / y ;
}

double solicitarnumero(string quenum){
	double numero;
	cout << quenum <<": ";
	while(!(cin >> numero)){
		cin.clear();
		cin.ignore (1000 , '\n');
	}
	return numero;
}
char solicitaroperador(){
	char operador;
	cout << "seleccione un operado( + | - | * | / | ) ";
	while (!(cin >> operador)){
		cin.clear();
		cin.ignore(1000, '\n');
		cout <<"operador invalido.intente de nuevo";
	}
	return operador;
}

void calculadora(){
	
   	double numero1, numero2 ,resultado;
   	char operador;
   	
   	cout << "Caluculadora de operaciones basicas con dos numero "<<endl;
   	cout << "por favor ingresa dos numeros"<<endl;
   	
   	numero1 = solicitarnumero("primer numero");
   	numero2 = solicitarnumero("segundo numero");
   	operador =solicitaroperador();
   	
   	switch(operador){
   		case '+':
   			resultado = sumar (numero1,numero2 );
   			break;
   		case '-':
   			resultado = restar(numero1,numero2);
   			break;
   		case '*':
   		    resultado = multiplicar(numero1,numero2);
   		    break;
   		case '/':
   		    resultado = dividir(numero1, numero2);
   		    break;
   		default:
   			cout <"Operador no soportado";
   			resultado = -1.0;
   			break;
	   }
	   
	cout << "El resultado es = " << resultado << endl;
}

#endif
