
#include <iostream>

#include <string>

#include <cstring>

#include <stdio.h>

#include <string.h>

using namespace std;

void StrReplace(string& str, string untill, string after)

{

	int I; int count = 0; int index = 0; string l1;

	for (int i(0); i < str.length(); i++) //главная

	{

		if (str[i] == untill[index])

		{

			count++; index++;

			if (count == untill.length())

			{

				l1 += after;

				count = 0;

				index = 0;

			}

		}

		else

		{

			l1 += str[i];

			if (count != untill.length())

			{

				count = 0;

				index = 0;

			}

		}

	}

	str = l1; l1.clear();

}

int main()

{

	setlocale(LC_ALL, "ru");

	string m_str;

	string sbstr;

	string astr;

	cout << "Введите строку" << endl;

	getline(cin, m_str);

	cout << "Введите подстроку" << endl;

	getline(cin, sbstr);

	cout << "Введите на что изменить" << endl;

	getline(cin, astr);

	StrReplace(m_str, sbstr, astr);

	cout << m_str << endl;

}
