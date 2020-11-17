#include <iostream>
using namespace std;

int main() 
{
	int n;
	setlocale(0, "russian");
	cout << "Введите количество членов ряда: "; cin >> n;
	if (n <= 0) {
		cout << "Количество членов ряда должно быть натуральным числом!" << endl;
	}
	else {
		int i, factorial;
		double sum;
		factorial = 1;
		sum = 0;
		for (i = 1; i <= n; i++) {
			factorial = factorial * i;
			sum = sum + 1.0f / factorial;
		}
		cout << "Сумма членов ряда равна: " << sum << endl;
	}
	system("pause");
}