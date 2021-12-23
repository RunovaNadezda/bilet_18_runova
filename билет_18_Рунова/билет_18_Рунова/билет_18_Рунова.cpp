// билет_18_Рунова.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char stroka1[1024];
	char simbol1;
	char cimbol2;
	cout << "Введите первую строку\n";
	cin >> stroka1;
	cout << "Введите первый символ\n";
	cin >> simbol1;
	cout << "Введите второй символ\n";
	cin >> cimbol2;
	int Simbol1Chislo = int(simbol1);
	int Simbol2Chislo = int(cimbol2);
	int simbol;
	int i = 0;
	bool key = true;
	if (Simbol1Chislo > Simbol2Chislo)
	{
		cout << "true";
	}
	else
	{
		while (stroka1[i] != '\0')
		{
			simbol = int(stroka1[i]);
			if (simbol <= Simbol1Chislo || simbol >= Simbol2Chislo)
			{
				key = false;
			}
			i++;
		}
		if (key)
		{
			cout << "true";
		}
		else
		{
			cout << "false";
		}
	}
	return 0;
}