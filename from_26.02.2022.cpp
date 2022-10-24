#include <iostream>
#include <cstdio>
#include <cstring>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int MAXLEN = 256;
	char string[MAXLEN];
	char string_1[MAXLEN];
	
	cout << "Введите строку: ";
	gets_s(string);
	cout << "Ваша строка: " << string << endl;
	cout << "Занято элементов: " << strlen(string) << endl;
	cout << "Свободных элементов: " << MAXLEN - strlen(string) << endl << endl;

	int m, n;
	cout << "Введите номер символа строки, с которого будет выводится строка: ";
	cin >> m;
	cout << "Введите номер символа строки, до которого будет выводится строка: ";
	cin >> n;
	cout << "Новый отрезок с 'm по n': ";
	int i, j;
        for (i = m - 1; i < n; i++)
	if ((m<0 || m>strlen(string)) && (n<0 || n>strlen(string)))
		cout << "Вы вышли за пределы фиксированного массива строк!";
	else
		cout << string[i];
		
			

		
	
	cout << endl << endl;
	
	
	
}

