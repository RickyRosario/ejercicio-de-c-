#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int num, i = 0, v1, v2, v3;
	cout << "Introduce un numeros entero: " << endl;
	cin >> num;

	v1 = num / 100;
	v2 = num % 100 / 10;
	v3 = num % 10;

	


	if (num > 99 and num < 1000) {
		if (v1 == 1 || v2 == 1 || v3 == 1) {
			cout << "El numero introducido cuenta con un el valor #1: " << num
				 << endl;
		} else {
			cout << "El numero que introdujo NO tiene como digito el valor #1"
				 << endl;
		}
  }

	return 0;
}