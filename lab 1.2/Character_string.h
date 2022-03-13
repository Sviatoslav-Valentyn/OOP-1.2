#pragma once
#include <iostream>
using namespace std;

class Character_string
{
	private:
		char* symbols;
	public:
		char* tostring();
		char getSymbol(int index);
		bool check(char x);
		void read();
		void display();
		void Init(const char* q);
		void Free();
};