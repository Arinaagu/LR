
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int len = 10;
	int mas[len] = { 1,22,34,56,13,14,9,44,7,15 };
	cout << "Статический массив: " << endl;
	for (int i = 0; i < len; i++) {
		cout << mas[i] << " ";
	}

	cout << endl;
	cout << "Новый массив: " << endl;

	for (int i = 0; i < len; i++) {
		if (mas[i] % 2 == 0)
			mas[i] = 0;
	}

	for (int i = 0; i < len; i++) {
		cout << mas[i] << " ";
	}
}
