#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float a, x, epsilon;
	float y0, y1;
	int counter;

	setlocale(0, "russian");
	cout << "Введите значение первого члена последовательности: "; cin >> a;
	cout << "Введите значение x: "; cin >> x;
	cout << "Введите значение эпсилон: "; cin >> epsilon;

	if ((a < 0) || (x < 0) || (epsilon < 0)) {
		cout << "Заданы некорректные данные!" << endl;
	}
	else {
		y0 = a;
		y1 = 0.5 * (y0 + x / y0);
		counter = 2;
		while (fabs(pow(y1, 2) - pow(y0, 2)) >= epsilon) {
			cout << "Условие НЕ выполняется для члена последовательности " << y1 << " под номером " << counter << endl;
			y0 = y1;
			y1 = 0.5 * (y0 + x / y0);
			counter = counter++;
		}
		cout << "Условие выполняется для члена последовательности " << y1 << " под номером " << counter << endl;
	}
	system("pause");
}
