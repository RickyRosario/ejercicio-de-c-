#include <iostream>
using namespace std;
int num, resul1, resul2;

int main(int argc, char *argv[]) {
	cout << "Indroduzca un numero entero: " << endl;
	cin >> num;

	resul1 = num / 10;
	resul2 = num % 10;

	cout << "Los numeros entre " << resul1 << " y " << resul2
		 << " son: " << endl;

	if (num > 9 and num < 100) {
		while (0 < num) {
			if (resul1 < resul2) {
        
				resul1 = resul1 + 1;
        cout << resul1 << endl;

			}else if (resul2 < resul1) {

				resul2 = resul2 + 1;
				cout << resul2 << endl;
			}
       

		}
	} 

	return 0;
}
