#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2/6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int arr1[] = { 1, 2, 3, 4, 5, 6 };
			int result1 = SumOfOddIndexedElements(arr1, 6);
			Assert::AreEqual(12, result1);  // Очікувана сума: 2 + 4 + 6
		}
	};
}
