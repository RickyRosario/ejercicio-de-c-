#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int i = 1, num1, num2;
	cout << "Introduce 2 numeros enteros menor y mayor: " << endl;
	cout << " Primer Valor: ";
	cin >> num1;
	cout << " Segundo Valor: ";
	cin >> num2;

	cout << "El numero multiplo de 5 entre el " << num1 << " y " << num2
		 << " es " << endl;

	while (i < num1 and num2 > num1) {
		num1 = num1 + 1;

		if (num1 % 5 == 0) {
			if (num1 != num2) {
				cout << num1 << endl;
			}
		}
	}

	return 0;
}
