#include <iostream>
#include <ctime>
using namespace std;

int* randomArray(int z, int*);
int* seacrhUnique(int* a, int* b, int size);
int* inputArray(int z);
void arrayOutput(int*, int z);
int searchMin(int*, int);

int main() {
	setlocale(0, "russian");
	int* a, * b, * c, z, elem_min, size;
	int random = 0;
	int* additional_random = &random;
	cout << "Введите значение z: "; cin >> z;
	a = randomArray(z, additional_random);
	b = randomArray(z, additional_random);
	c = seacrhUnique(a, b, z);
	cout << "A: " << "";
	arrayOutput(a, z);
	cout << endl << "B: ";
	arrayOutput(b, z);
	size = *c;
	elem_min = searchMin(c, size);
	cout << "Искомый элемент: " << elem_min << endl;
	system("pause");
}

//Масив з випадковими числами
int* randomArray(int z, int *additional_random) {
	srand(time(NULL) + *additional_random);
	int* array = new int[z];
	for (int i = 0; i < z; i++) {
		*(array + i) = rand()%300 - 200;
	}
	*additional_random = rand();
	return array;
}

//Самостійний ввід масива
int* inputArray(int z) {
	int* array = new int[z];
	for(int i = 0; i < z; i++) {
		cout << "Input elems of array: "; cin >> *(array + i);
	}
	return array;
}

int* seacrhUnique(int* a, int* b, int size) {
	int counter_of_unique_elems = 0;
	int* pre_result = new int[size];
	for (int i = 0; i < size; i++) {
		bool is_unique = true;
		int j = 0;
		for (int j = 0; j < size; j++) {
			if (*(a + i) == *(b + j)) {
				is_unique = false;
			}
		}
		if (is_unique == true) {
			*(pre_result + counter_of_unique_elems) = *(a + i);
			counter_of_unique_elems += 1;
		}
	}
	int* result = new int[counter_of_unique_elems + 1];
	*result = counter_of_unique_elems;
	for (int i = 1; i < counter_of_unique_elems; i++) {
		*(result + i) = *(pre_result + i);
	}
	delete[] pre_result;
	return result;
}

int searchMin(int* array, int size) {
	int min_elem = *(array+1);
	for (int i = 0; i < size; i++) {
		if (min_elem > *(array + i)) {
			min_elem = *(array + i);
		}
	}
	return min_elem;
}

void arrayOutput(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << *array << " ";
		array++;
	}
	cout << endl;
}
