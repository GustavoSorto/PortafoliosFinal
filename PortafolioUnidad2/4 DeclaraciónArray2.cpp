#include <iostream>
#include <iomanip>

float promedio (const float arr[], const int n) {
	float suma = 0.0;
	for (int i = 0; i < n; i++)
	suma += arr [i];
	return suma / n;	
}

int main(int argc, const char * argv []) {
	using namespace std;
	
	const int N = 5;
	float numero[N];
	
	for (int i = 0; i < N; i++){
		cout << "Numero" << (i + 1) << "  :  ";
		cin >> numero[i];
	}
	
	cout << "El promedio es " << fixed << setprecision(1);
	cout << promedio(numero, N) << endl;
	
	return 0;
	
}
