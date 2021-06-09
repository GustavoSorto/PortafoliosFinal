#include <iostream>
using namespace std; 
int main(){
	
	int num;
	
	cout << "Ingrese un numero entre 1 y 3: ";
	cin >> num;
	
	switch(num){
		case 1:
			cout << "Mas vale pajaron en mano que cien volando." << endl;
			break;
		case 2:
			cout << "Ojos que no ven, corazon que no siente." << endl;
			break;
		case 3:
			cout << "No hay mal que por bien no venga." << endl;
			break;
		default:
			cout << "Debe ingresar 1, 2 o 3" << endl;
		
	return 0;	
	}
}
