#include <iostream>
#include <stdio.h>
#include <time.h>
#include <cstdlib>

using namespace std;

double garmon(double a, double b) //расчет среднего гармонического двух чисел;
{
	double g = 0;
	g = 2 / ((1 / a) + (1 / b));
	return g;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "введите два числа:" << endl;
	do {
		cin >> a >> b;
		if (a == 0 || b == 0)
			cout << "Ошибка ввода, на 0 делить нельзя!Повторите ввод:";//проверка ввода;
	} while (a == 0 || b == 0); cout << endl;
	cout << "Среднее гармоническое чисел " << a << " и " << b << endl << garmon(a, b);
	system("pause");
	return 0;
}
