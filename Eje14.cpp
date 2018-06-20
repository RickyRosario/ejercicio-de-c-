#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int num, i = 1;
	cout << "Introduce un numero entero: " << endl;
	cin >> num;

	cout << "Los numeros entre 1 y " << num
		 << " que son multiplos de 20 son: " << endl;
	while (i < num) {
		i = i + 1;
		if (i % 20 == 0) {
			cout << i << endl;
		}
	}
	return 0;
}