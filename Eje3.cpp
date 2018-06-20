#include <iostream>
using namespace std;
int num, i = 0;

int main(int argc, char *argv[]) {
	cout << "Indroduzca un  numero entero: " << endl;
	cin >> num;

	while (i <= num) {
		i = i + 1;

		if (num % i == 0) {
			cout <<"Los numeros divisores son: " <<i <<endl;
		}
	}

	return 0;
}
