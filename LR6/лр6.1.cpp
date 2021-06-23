#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
	int m = 0;
	if ((a > b) && (a > c)) m = a;
	if ((b > a) && (b > c)) m = b;	//выбор наибольшего числа
	if ((c > a) && (c > b)) m = c;
	return m;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите три числа:" << endl;
	cin >> a >> b >> c;
	cout << "Максимальное число=" << max(a, b, c) << endl; //вызов функции
	system("pause");
	return 0;

}
