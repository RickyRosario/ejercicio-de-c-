#include <iostream>
using namespace std;
int num1, num2, num3, i = 1;

int main(int argc, char *argv[]) {
	cout << "Indroduzca el primer numero entero: " << endl;
	cin >> num1;

	while (i < num1) {
		i = i + 1;

		if (i != num1) {
			cout << i << endl;
		}
	}

	cout << "Indroduzca el segundo numero entero: " << endl;
	cin >> num2;

	while (i < num2) {
		i = i + 1;

		if (i != num2) {
			cout << i << endl;
		}
	}
	cout << "Indroduzca el tercer numero entero: " << endl;
	cin >> num3;

	while (i < num3) {
		i = i + 1;

		if (i != num3) {
			cout << i << endl;
		}
	}
	return 0;
}
