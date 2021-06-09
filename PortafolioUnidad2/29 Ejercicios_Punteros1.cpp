#include <iostream>

using namespace std;

// Agregamos (Void*) para evitar la conversion de la dir a char

int main(){
	
	char c = 'T' , d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;
	
	
	p3 = &d;
	cout << "*p3 = " << *p3 << endl;  // (1)
	
	p3 = p1;
	cout << "*p3 = " << *p3
	<< ", p3 = " << (void*)p3 << endl;
	
	*p1 = *p2;
	cout << "*p1 = " << *p1
	<< ", p1 = " << (void*)p1 << endl;
	
	return 0;
}
