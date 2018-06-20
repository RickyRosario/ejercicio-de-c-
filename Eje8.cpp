#include <iostream>
using namespace std;
int num1, i = 20;

int main(int argc, char *argv[]) {
	cout << "Los numeros pares entre 20 y 200 son: " << endl;

	while (i < 200) {
		i = i + 1;

		if (i % 2 == 0) {
			cout << i << endl;
		}
	}

	return 0;
}
