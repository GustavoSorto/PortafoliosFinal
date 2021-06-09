#include <iostream>

using namespace std;

class Automovil {
	public: 
		Automovil();
		void set_detalles();
		void set_numPuertas( int puertas);
		void get_detalles()const;
		int get_numPuertas()const;
	private:
		string fabricante;
		int numPuertas;
		int numCilindros;
		int tamanioMotor;
};

Automovil::Automovil(){
	numPuertas = 0;
	numCilindros =0;
	tamanioMotor=0;
}

void Automovil::set_detalles(){
	cout << "indroduzaca nombre del fabricante: ";
	cin >> fabricante;
	cout << "numero de puertas: ";
	cin >> numPuertas;
	cout << "numero de cilindros: ";
	cin >> numCilindros;
	cout <<"Tamanio del motor: ";
	cin >> tamanioMotor;
}

void Automovil::set_numPuertas(int puertas){
	this-> numPuertas = puertas;
}

void Automovil::get_detalles()const{
	cout << "Fabricante: " << fabricante << endl;
	cout << "Puertas: " << numPuertas << endl;
	cout << "clindros: " << numCilindros << endl;
	cout << "Motor: " << tamanioMotor << endl;
}

int Automovil::	get_numPuertas()const{
	cout << "Puertas: " << numPuertas << endl;
}


int main(){
	
	Automovil miCarro;
	miCarro.get_detalles();
	miCarro.set_detalles();
	miCarro.get_detalles();
/*	Automovil carroDeErick;
	carroDeErick.set_detalles();
	
	Automovil carroDeManuel;
	carroDeManuel.set_detalles();
	
	miCarro.get_detalles();
	carroDeErick.get_detalles();
	carroDeManuel.get_detalles();*/
	return 0;
}














