#include <iostream>
using namespace std;

int num, cont = 2;
int main(int argc, char **argv) {
	cout << "Introduzca un numero entero: ";
	cin >> num;

	cout << "Estos son los numeros entre 1 y " << num << ":" << endl;
	while (cont != num) {
		cout << cont << endl;
		if (cont != 10) {
		}
		cont++;
	}

	return 0;
}