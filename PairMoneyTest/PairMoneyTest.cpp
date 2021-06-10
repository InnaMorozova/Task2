#include "pch.h"
#include "CppUnitTest.h"
#include "..\Task2\Money.h"
#include "..\Task2\Money.cpp"
#include "..\Task2\Pair.h"
#include "..\Task2\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PairMoneyTest
{
	TEST_CLASS(PairMoneyTest)
	{
	public:
		
		TEST_METHOD(AdditionPairsSuccess)
		{
			Pair x(7, 8);
			Pair y(9, 1);
			Pair z;
			z = x + y;
			Pair res(15, 10);
			bool check_result = res == z;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::IsTrue(check_result);
		}

		TEST_METHOD(MultiplicationPairsSuccess)
		{
			Pair x(7, 8);
			int y = 5;
			Pair z;
			z = y * x;
			Pair res(35, 40);
			bool check_result = res == z;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::IsTrue(check_result);
		}

		TEST_METHOD(AdditionMoneysSuccess)
		{
			Money x(50, 50);
			Money y(100, 75);
			Money z;
			z = x + y;
			Money res(151, 25);
			bool check_result = res == z;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::IsTrue(check_result);
		}

		TEST_METHOD(SubtractionMoneysSuccess)
		{
			Money x(50, 50);
			Money y(100, 75);
			Money z;
			z = x - y;
			Money res(50, 25);
			bool check_result = res == z;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::IsTrue(check_result);
		}

		TEST_METHOD(DivisionMoneysSuccess)
		{
			Money x(100, 50);
			Money y(50, 25);
			float z;
			z = x / y;
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(z, float(2.0));
		}
	};
}
