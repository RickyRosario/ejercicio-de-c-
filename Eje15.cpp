#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int i = 1, mult = 0;
	cout << "Introduce un numero entero: " << endl;

	cout << "La suma de los 20 primeros multiplos de de 3 son: " << endl;
	while (i != 600) {
  
		if (i % 3 == 0)   mult = mult + i; {
			i = i + 1;
		}
	}
	cout << i << endl;
	return 0;
}