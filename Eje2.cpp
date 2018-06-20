#include <iostream>
using namespace std;
int num1, num2, i = 1;

int main(int argc, char *argv[]) {
	cout << "Indroduzca un numero entero: " << endl;
	cin >> num1;
	cout << endl;

	cout << "Estos son los numeros entre " <<i <<" y " << num1 << endl;

	while (i < num1) {
		i = i + 1;

		if (i != num1) {
			cout << i << endl;
		}
	}

	return 0;
}
