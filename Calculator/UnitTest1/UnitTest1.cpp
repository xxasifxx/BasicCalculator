#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(addition)
		{
			double result, value = 3;
			result = add(1, 2);
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(subtraction)
		{
			double result, value = -1;
			result = subtract(1, 2);
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(multiplication)
		{
			double result, value = 2;
			result = multiply(1, 2);
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(division)
		{
			double result, value = 0.5;
			result = divide(1, 2);
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(Exponentiation)
		{
			double result, value = 1;
			result = exponent(1, 2);
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(string2double)
		{
			double result;
			double value = 2;
			result = str2dub("2");
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(double2string)
		{
			std::string result;
			std::string value = "2";
			result = dub2str(2);
			Assert::AreEqual(result, value);
		}
	};
}
