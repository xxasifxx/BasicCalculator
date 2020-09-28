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
			double result;
			double value = 3;
			result = add(1, 2);
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(subtraction)
		{
			double result;
			double value = -1;
			result = subtract(1, 2);
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(multiplication)
		{
			double result;
			double value = 2;
			result = multiply(1, 2);
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(division)
		{
			double result;
			double value = 0.5;
			result = divide(1, 2);
			Assert::AreEqual(result, value);
		}
		TEST_METHOD(Exponentiation)
		{
			double result;
			double value = 1;
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
			TwoVals result;
			std::string value = "2";
			result.Val1 = dub2str(2);
			Assert::AreEqual(result.Val1, value);
		}
	}; 
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(checkAdd)
		{
			TwoVals result = { "1+1","" };
			std::string value = "2";
			result = checkAddition(result);
			Assert::AreEqual(result.Val1, value);
		}
		TEST_METHOD(checkSub)
		{
			TwoVals result = {"1-2", ""};
			std::string value = "-1";
			result = checkSubtraction(result);
			Assert::AreEqual(result.Val1, value);
		}
		TEST_METHOD(checkMult)
		{
			TwoVals result = { "2*3","" };
			std::string value = "6";
			result = checkMultiplication(result);
			Assert::AreEqual(result.Val1, value);
		}
		TEST_METHOD(checkDiv)
		{
			TwoVals result = { "1/2", "" };
			std::string value = "0.5";
			result = checkDivision(result);
			Assert::AreEqual(result.Val1, value);
		}
		TEST_METHOD(checkExpo)
		{
			TwoVals result = { "2^3","" };
			std::string value = "8";
			result = checkExponent(result);
			Assert::AreEqual(result.Val1, value);
		}
	};
}