#include <iostream>
using namespace std; 

int absoluto (int var){
	if (var <0)
		var = -var;
	return 0;
}

double absoluto (double var){
	if (var <0)
		var = -var;
	return 0;
}

int main(){
	
	int num1 = -496;
	double num2 = -1354.268;
	
	cout << "El valor absoluto de " << num1 << " es: " << absoluto(num1) << endl;
	cout << "El valor absoluto de " << num2 << " es: " << absoluto(num2) << endl;
	return 0;
}
