#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float b1;	// ������ ���� ����. �������
	float q;	// ��������� ����. �������
	float sum;  // �������� ���� ����. �������
	cout << "The first term of a geometric sequence: "; cin >> b1;
	cout << "The common ratio: "; cin >> q;
	if (abs(q) < 1 && q != 0 && b1 != 0) {
		sum = b1 / (1 - q);  // ������� ���������� ����
		cout << "The sum of geometric progression: " << sum << endl;
	}
	else {
		cout << "The progression is not infinite" << endl;
	}
	system("pause");
}