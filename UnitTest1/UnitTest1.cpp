#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.2/Character_string.h"
#include "../lab 1.2/Character_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Character_string z;
			z.Init("Hello World!");
			z.getSymbol(1);
			Assert::AreEqual('e', z.getSymbol(1));
		}
	};
}
