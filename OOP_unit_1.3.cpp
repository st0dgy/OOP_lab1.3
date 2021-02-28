#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\OOP_lab1.3\Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OOPunit13
{
	TEST_CLASS(OOPunit13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money money;
			bool t;
			t = money.Init(1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 50, 10);
			Assert::AreEqual(t, true);
		}
	};
}
