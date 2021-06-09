#include <iostream>

using namespace std;

int main(){
	
	int i = 12, j = 11;
	bool b1 = true, b2 = false;
	
	if (i < j) { cout << " i < j " << endl;}
	if (i <= j){ cout << " i <= j " << endl;}
	if (i != j){ cout << " i != j " << endl;}
	if (i == j){ cout << " i == j " << endl;}
	if (i >= j){ cout << " i >= j " << endl;}
	if (i > j) { cout << " i > j " << endl;}
	
	if (b1 && b2) { cout << " b1 AND b2" << endl;}
	if (!(b1 && b2)) { cout << " NOT b1 AND b2" << endl;}
	if (b1 || b2) { cout << " b1 OR b2" << endl;}
	
	return 0;
}
