﻿#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float x, y;
	setlocale(0, "russian");
	//Введення координат точки
	cout << "Введите число X: "; cin >> x;
	cout << "Введите число Y: "; cin >> y;
	//Почергова перевірка точки на належність площинам, переріз яких є заштрихованим
	if ((pow((x - 2), 2) + pow(y, 2)) <= 4) {
		if ((x / 2) < y) {
			cout << "Точка принадлежит заштрихованой части плоскости" << endl;
		}
		else {
			cout << "Точка НЕ принадлежит заштрихованой части плоскости" << endl;
		}
	}
	else {
		cout << "Точка НЕ принадлежит заштрихованой части плоскости" << endl;
	}
	system("pause");
}
