// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	double input[2] = {2,4};
	string instr = "";
	cout << "Select operation using x, y template \n Example: x^y" << endl;
	cout << "To stop type \"stop\" \nFor help type \"help\" " << endl;
	while (instr != "stop")
	{
		cin >> instr;
		if (instr != "help")
		{
			cout << instr;
			checkExponent(instr);
			checkMultiplication(instr);
			checkDivision(instr);
			checkAddition(instr);
			checkSubtraction(instr);
		}
		else
		{
			cout << "Accepted calculations are as follows\nx+y\nx-y\nx*y\nx/y" << endl;
		}
	}
}