#include <iostream>
using namespace std;
int num, i = 0, resul;

int main(int argc, char *argv[]) {
	cout << "Indroduzca un numero entero: " << endl;
	cin >> num;
	cout << endl;

	cout << "La suma de todos los numero entero entre 1 y " << num
		 << " es: " << endl;
	while (i < num) {
		i = i + 1;

		if (i != 0) {
			resul = resul + i;
			cout << resul << endl;
		}
	}

	return 0;
}
