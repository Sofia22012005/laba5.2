#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.3/laba5.3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double a;
			a = k(2.0);
			Assert::AreEqual(a, 0.0);
		}
	};
}
