#include <iostream>
using namespace std;
int num1 = 0, num2, i = 0;

int main(int argc, char *argv[]) {
	cout << "Indroduzca dos  numeros entero: " << endl;
	cin >> num1;
	cin >> num2;
	cout << endl;

	cout << "Estos son los numeros entre los valores ingresados: " << endl;
	if (num1 < num2) {
		while (i <= num1) {
			num1 = num1 + 1;

			if (num1 < num2) {
				cout << num1 << endl;
			}
		}
	}
	return 0;
}
