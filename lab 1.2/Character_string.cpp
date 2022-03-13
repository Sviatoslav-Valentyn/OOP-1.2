#include "Character_string.h"
#include "string"

char* Character_string::tostring()
{
	return symbols;
}

char Character_string::getSymbol(int index)
{
	return symbols[index];
}

void Character_string::read()
{
	string y;
	char z, n;
	cout << " Symbols -> "; getline(cin, y);
	Init(y.c_str());
}

void Character_string::display()
{
	cout << " Symbols -> " << tostring()<< endl;
}

void Character_string::Init(const char* q)
{
	int size;
	size = 0;
	while (q[size++] != '\0');
	symbols = new char[size];
	for (size_t i = 0; i < size; i++)
	{
		symbols[i] = q[i];
	}
}

void Character_string::Free()
{
	delete[]symbols;
}

bool Character_string::check(char x)
{
	for (size_t i = 0; symbols[i] != '\0'; i++)
		if (x == symbols[i])
			return true;
	return false;
}