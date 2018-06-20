#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int i = 0, num, v1, v2, resul;
	cout << "Introduce un numero: " << endl;
	cin >> num;

  v1 = num / 10;
  v2 = num % 10;

	while (num > i) {
		resul = v1 + v2;
		i = i + 1;
	}
	cout << "El resultado de la suma de " << v1 <<" + " << v2 <<" es: " <<resul;
	return 0;
}
