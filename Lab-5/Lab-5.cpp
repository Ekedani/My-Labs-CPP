#include <iostream>
using namespace std;

int main(){
	int a, b;
	setlocale(0, "russian");
	cout << "Введите значение a: "; cin >> a;
	cout << "Введите введите значение b: "; cin >> b;
	if (a > b || a < 1) {
		cout << "Введите корректные начальные значения!" << endl;
	}
	else {
		int number;
		for (number = a; number <= b; number++) {
			bool is_odd = 1;
			int counter = 2;
			while (is_odd && counter < number) {
				if (number % counter == 0) {
					is_odd = 0;
				}
				counter = counter + 1;
			}
			if (is_odd && number != 1) {
				cout << number << " - простое число" << endl;
			}
		}
	}
	system("pause");
}
