
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n; int k; int i = 10000;
	cout << "Введите пятизначное число" << endl;
	cin >> n;
	while (n > 0)
	{
		k = n / i; //вычленение цифры;
		cout << k << endl;
		n = n - k * i; // уменьшение числа на старший разряд;
		i = i / 10;
	}

	system("pause");
	return 0;
}

