#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float b1;	// Перший член геом. прогресії
	float q;	// Знаменник геом. прогресії
	float sum;  // Значення суми геом. прогресії
	cout << "The first term of a geometric sequence: "; cin >> b1;
	cout << "The common ratio: "; cin >> q;
	if (abs(q) < 1 && q != 0 && b1 != 0) {
		sum = b1 / (1 - q);  // Формула визначення суми
		cout << "The sum of geometric progression: " << sum << endl;
	}
	else {
		cout << "The progression is not infinite" << endl;
	}
	system("pause");
}