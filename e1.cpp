#include <iostream>
using namespace std;

int main () {
	int num, mult, i = 1;
	cout << "Cantidad de multiplos: ";
	cin >> num;
	while ( i <= num) {
		mult = 7 * i;
		cout << mult <<endl;
		i = i + 1;	
	}
	return 0;
}