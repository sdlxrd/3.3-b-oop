#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\3.3b oop\3.3b oop\Money.cpp"
#include "C:\Users\Misha\source\repos\3.3b oop\3.3b oop\Pair.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money m, p;
			m.setGrn(15);
			p.setGrn(14);
			double a = m.getGrn();
			double b = p.getGrn();
			double res = a - b;
			
			Assert::AreEqual(res, 1.);
		}
	};
}
