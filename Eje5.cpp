#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int num1, num2, resul;
	cout << "Introduce 2 numeros enteros: " << endl;
	cin >> num1;
	cin >> num2;

	while (num1 < num2) {
		num1 = num1 + 1;
		if (num1 != num2) {
			if (num1 % 10 == 4) {
				cout <<"Los valores introducidos que terminan en 4 entre cada valor son: " << num1 << endl;
			}
		}
	}

	return 0;
}