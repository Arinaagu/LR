#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <string.h>
using namespace std;
string compr(string str)
{
	string S;
	for (int i(0); i < str.length(); i++)
	{
		int count = 1;
		int z = i;
		do
		{
			if (str[z + 1] == str[z])
			{
				count++;
				z++;
			}
		} while (str[z + 1] == str[z]);
		S += "" + to_string(static_cast<int>(str[i])) + "," + to_string(count) + " ";
		i = z;
	}
	return S;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	string m_str;
	string n_str;
	cout << "Введите строку" << endl;
	getline(cin, m_str);
	n_str = compr(m_str);
	cout << endl << n_str << endl;
	system("pause");
}
