#include <iostream>

using namespace std;

void Collatz(long long int userValue, int steps) {
	if (userValue != 1) {
		if (userValue % 2 == 0) {
			userValue = userValue / 2;
			cout << "Novo valor: " << userValue << endl;
			steps += 1;
			Collatz(userValue, steps);
		}
		else {
			userValue = (userValue * 3) + 1;
			cout << "Novo valor: " << userValue << endl;
			steps += 1;
			Collatz(userValue, steps);
		}
	}
	else {
		cout << "Número de passos: " << steps << endl;
	}
}

int main(void) {
	long long int userValue;
	int steps = 0;

	cout << "Insira o valor desejado: ";
	cin >> userValue;

	if (userValue <= 1) {
		cout << "Erro! Valor inserido é menor ou igual a 1 ou inválido!" << endl;
		return 1;
	}
	else {
		Collatz(userValue, steps);
	}

	return 0;
}