#include <iostream>
using namespace std;
const int M = 5;
int avg(int a[M])
{
	int sum = 0, avg = 0;
	for (int i = 0; i < M; i++)
	{		//ф-я поиска среднего арифметического в массиве                     
		sum = sum + a[i];              

	}
	avg = sum / M;
	return avg;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int b[M] = { 28,17,93,88,7 };
	cout << "Среднее арифметическое массива=" << avg(b);
	system("pause");
	return 0;
}
