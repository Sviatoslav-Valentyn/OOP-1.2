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
	cout << " ������ ������� ������� -> "; cin >> k;
	cout << "���������: " << z.getSymbol(k) << endl;
	char p;
	cout << " ������ ���� ������ �������� � ����� -> "; cin >> p;
	cout << "���������: " << z.check(p) << endl;
	z.Free();
	return 0;
}