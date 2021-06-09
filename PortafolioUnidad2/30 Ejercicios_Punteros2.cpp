#include <iostream>

using namespace std;

int main(){
	
	int i;
	int k;
	int *p;
	int **pp;
	
	char c = 'A';  // el puntero debe ser del mismo tipo
	char *pe = &c; // que la variable a apuntar 
	
	i = 42;
	k = i;
	p = &i;
	pp = &p;
	
	cout << "i = " << i << " &i = " << (void*)&i << endl;
	cout << "K = " << k << " &k = " << (void*)&k << endl;
	cout << "p = " << p << " &p = " << (void*)&p << " *p = " << endl;
	
	*p = 75;
	
	cout << "i = " << i << " &i = " << (void*)&i << endl;
	
	cout << "pp = " << pp << " &pp =" << (void*)&pp << 
	" *pp = " << *pp << " **pp = " << **pp <<endl;
	
	return 0;
 
}
