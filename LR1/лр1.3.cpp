
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int mas[3][3];
	cout << "Введите значения элементов массива: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "mas[" << i << "][" << j << "] = ";
			cin >> mas[i][j];
		}

	}

	cout << endl << "Готовый массив:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	int d;
	d = mas[0][0] * mas[1][1] * mas[2][2] + mas[0][1] * mas[1][2] * mas[2][0] + mas[0][2] * mas[1][0] * mas[2][1] - mas[0][2] * mas[1][1] * mas[2][0] - mas[0][0] * mas[1][2] * mas[2][1] - mas[0][1] * mas[1][0] * mas[2][2];
	cout << endl << endl << "Определитель матрицы = " << d;
}
