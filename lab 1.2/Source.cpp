#include "Character_string.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Character_string z;
	z.read();
	z.display();
	int k;
	cout << " Введіть позицію символа -> "; cin >> k;
	cout << "Результат: " << z.getSymbol(k) << endl;
	char p;
	cout << " Введіть який символ пошукати в рядку -> "; cin >> p;
	cout << "Результат: " << z.check(p) << endl;
	z.Free();
	return 0;
}