#include <iostream>
#include <cmath> 

using namespace std;

double factorial(int);
double func_g(double);
void one_of_two_results(double);

int main() {
    double y;
    setlocale(0, "russian");
    cout << "Ввведите значение y: "; cin >> y;
    one_of_two_results(y);
    system("pause");
}

void one_of_two_results(double y) {
    double result;
    if ((func_g(pow(y, 2) - 1) == 6) || y == 1 || y == -1 ) {
        cout << "Данное значение y вызывает неопределенность!" << endl;
    }
    else {
        result = (1.7 * func_g(0.25) + 2 * func_g(1 + y)) / (6 - func_g(pow(y, 2) - 1));
        cout << "Значение функции при заданном y равно: " << result << endl;
    }
}

double func_g(double param) {
    double result, sum_n = 0, sum_d = 0;
    for (int k = 0; k <= 10; k++) {
        double num_n, den_n;
        num_n = pow(param, 2 * k + 1);
        den_n = factorial(2 * k + 1);
        sum_n = sum_n + num_n / den_n;
    }
    for (int k = 0; k <= 10; k++) {
        double num_d, den_d;
        num_d = pow(param, 3 * k);
        den_d = factorial(3 * k);
        sum_d = sum_d + num_d / den_d;
    }
    result = sum_n / sum_d;
    return result;
}

double factorial(int n) {
    double result = 1;
    if (n != 0) {
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
    }
    return result;
}