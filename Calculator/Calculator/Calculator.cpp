// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string str = "";
	cout << "Select operation using x, y template \n Example: x^y" << endl;
	cout << "To stop type \"stop\" \nFor help type \"help\" " << endl;
	while (true)
	{
		cin >> str;
		if (str == "help")
		{
			cout << "Accepted calculations are as follows\nx+y\nx-y\nx*y\nx/y" << endl;
		}
		else if (str == "stop") 
		{
			break;
		}
		else
		{
			cout << str;
			TwoVals out = { str,"" };
			out = checkExponent(out);
			out = checkMultiplication(out);
			out = checkDivision(out);
			out = checkAddition(out);
			out = checkSubtraction(out);
			cout << " = " << out.Val1 << endl;
		}
	}
}