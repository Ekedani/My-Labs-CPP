#include <iostream>
using namespace std;

int main() 
{
	int n, i, factorial = 1;
	double sum = 0;
	setlocale(0, "russian");
	cout << "Введите количество членов ряда: "; cin >> n;
	if (n <= 0) {
		cout << "Количество членов ряда должно быть натуральным числом!" << endl;
	}
	else {
		for (i = 1; i <= n; i++) {
			factorial = 1 * i;
			sum = sum + 1. / factorial;
		}
		cout << "Сумма членов ряда равна: " << sum << endl;
	}
	system("pause");
}