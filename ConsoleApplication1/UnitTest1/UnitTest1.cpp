#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

        TEST_METHOD(TestIsNonDecreasingRecursive)
        {
            const int size = 5;
            int arr1[size] = { 1, 2, 3, 4, 5 };
            Assert::IsTrue(isNonDecreasingRecursive(arr1, size));

            int arr2[size] = { 5, 4, 3, 2, 1 };
            Assert::IsFalse(isNonDecreasingRecursive(arr2, size));
        }
        TEST_METHOD(TestIsNonDecreasingRecursiveT)
        {
            const int size = 5;
            int arr1[size] = { 1, 2, 3, 4, 5 };
            Assert::IsTrue(isNonDecreasingRecursiveT(arr1, size));

            int arr2[size] = { 5, 4, 3, 2, 1 };
            Assert::IsFalse(isNonDecreasingRecursiveT(arr2, size));
        }
	};
}
