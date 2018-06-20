#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int i = 1, cont = 1, num, primo = 0;
	cout << "Introduce un numero: " << endl;
	cin >> num;

	while (i <= num) {
		i = i + 1;
		while (cont <= num) {
			if (i % cont == 0) {
				primo = primo + 1;
			}
			cont = cont + 1;
		}
	} if (primo == 2) {
		cout << "Es PRIMO" << endl;
	}
	return 0;
}
