#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char a;
	cout << "Введите строчную букву:" << endl;
	cin >> a;
	a = toupper(a); //функция перевода регистра;
	cout << "Вывод заглавной буквы:" << endl << a;
	system("pause");
	return 0;
}
