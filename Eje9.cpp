#include <iostream>
using namespace std;
int i = 25;

int main(int argc, char *argv[]) {
	cout << "Los numeros pares entre 20 y 200 son: " << endl;

	while (i < 205) {
		i = i + 1;

		if (i % 10 == 6) {
			cout << i << endl;
		}
	}

	return 0;
}
