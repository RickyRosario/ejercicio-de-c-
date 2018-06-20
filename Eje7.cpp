#include <iostream>
using namespace std;
int num1, i = 1;

int main(int argc, char *argv[]) {
	cout << "Los numeros enteros entre 1 y 100 son: " << endl;

	while (i < 100) {
		i = i + 1;

		if (i != 100) {
			cout << i << endl;
		}
	}

	return 0;
}
