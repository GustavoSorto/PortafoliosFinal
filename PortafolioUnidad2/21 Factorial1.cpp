#include <iostream>

using namespace std;

unsigned long long int factorial(int n){
	unsigned long long int factorial = 1;
	int numFact = n;
	int i = 1;
	while(i <= numFact){
		factorial *= i;
		cout<<"numFact = "<<i<<" valor = "<<factorial<<endl;
		i++;
	}
	return factorial;
}

int main(){
	int value;
	cout << "Encuentre el factorial de un numero: ";
	cin>>value;
	cout<<"El factorial del numero dado es: "<< factorial(value)<<endl;
	return 0;
}
