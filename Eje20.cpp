#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int i = 0, num;
	cout << "Introduce un numero: " << endl;
	cin >> num;

	while (num > i) {
		num = num / 10;
		i = i + 1;
	}
	cout << "El valor introducido cuenta con: " << i << " digitos. ";
	return 0;
}
