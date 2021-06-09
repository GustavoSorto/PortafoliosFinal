#include <iostream>
#include <bitset>
using namespace std;

int main (){
	
	int x = 5;
	int y = 3;
	
	cout << "       Decimal" << "      Binario " << endl;
	cout <<"       "<< x << "            "<< bitset<8>(x)<<endl;
	cout <<"       "<< x << "            "<< bitset<8>(x)<<endl;
	
	int z = x & y ;
	cout <<"x & y: "  << z << "            "<< bitset<8>(z)<<endl;
	z = x | y;
	cout <<"x | y: "  << z << "            "<< bitset<8>(z)<<endl;
	z = x ^ y;
	cout <<"x ^ y: "  << z << "            "<< bitset<8>(z)<<endl;
	z = x << y;
	cout <<"x<< y: "  << z << "           "<< bitset<8>(z)<<endl;
	z == x >> y;
	cout <<"x>> y: "  << z << "           "<< bitset<8>(z)<<endl;
	
	return 0;
	
}
