#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void generate_matrix(int a[5][10], int n_size, int m_size, int* additional_random);
double* average_array(int matrix[5][10], int n_size, int m_size);
double sum(int m_size, double* first_array, double* second_array);
void matrix_output(int matrix[5][10], int size_n, int size_m);

int main() {
	setlocale(LC_ALL, "russian");
	const int n_size = 5, m_size = 10; //Розмір масивів
	int A[n_size][m_size], B[n_size][m_size];
	int random = 0;
	int* additional_random = &random; // Змінні, що допоможуть генерувати дві неоднакові матриці
	generate_matrix(A, n_size, m_size, additional_random);
	cout << "Матриця A :" << endl;
	matrix_output(A, n_size, m_size);
	generate_matrix(B, n_size, m_size, additional_random);
	cout << "Матриця B :" << endl;
	matrix_output(B, n_size, m_size);
	double* a_average, * b_average;
	a_average = average_array(A, n_size, m_size);
	b_average = average_array(B, n_size, m_size);
	double result;
	result = sum(m_size, a_average, b_average);
	delete[] a_average;
	delete[] b_average;
	cout << "Значення суми, обчислене за формулою: " << result << endl;
	system("pause");
}

//Наповнення матриці випадковими від'ємними значеннями
void generate_matrix(int a[5][10], int n_size, int m_size, int* additional_random) {
	srand(time(NULL) + *additional_random);
	for (int i = 0; i < n_size; i++) {
		for (int j = 0; j < m_size; j++) {
			a[i][j] = -1 * (rand() % 999);
		}
	}
	*additional_random = rand();
}

//Пошук середнього арифметичного елементів кожного стовпця
double* average_array(int matrix[5][10], int n_size, int m_size) {
	double* average_array = new double[m_size];
	double average_elem;
	for (int m = 0; m < m_size; ++m) {
		average_elem = 0;
		for (int n = 0; n < n_size; ++n) {
			average_elem += matrix[n][m];
		}
		average_array[m] = average_elem / n_size;
	}
	return average_array;
}

//Розрахунок суми за формулою
double sum(int m_size, double* first_array, double* second_array) {
	double sum = 0;
	for (int m = 0; m < m_size; m++) {
		sum = sum + fabs(first_array[m] - second_array[m]);
	}
	return sum;
}

//Виведення матриці
void matrix_output(int matrix[5][10], int size_n, int size_m) {
	for (int n = 0; n < size_n; ++n) {
		for (int m = 0; m < size_m; ++m) {
			cout << setw(5) << matrix[n][m];
		}
		cout << endl;
	}
}