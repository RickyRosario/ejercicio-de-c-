#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int num, i = 1, v1, v2, v3;
	cout << "Introduce un numeros entero: " << endl;
	cin >> num;

cout <<"Los numeros entre 1 y "<<num <<" que son multiplos de 5 son: "<<endl;
	while (i < num) {
    i = i + 1;
		if (i % 5 == 0) {
			cout << i << endl;
		} 
	}
	return 0;
}