// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

double add(double x, double y)
{
	double z = x + y;
	return z;
}
double subtract(double x, double y)
{
	return x - y;
}
double multiply(double x, double y)
{
	return x * y;
}
double divide(double x, double y)
{
	return x / y;
}
double exponent(double x, double y)
{
	double z = pow(x, y);
	return z;
}

string dub2str(double z)
{
	stringstream ss;
	string out = "";
	ss << z;
	ss >> out;
	return out;
}

double str2dub(string s)
{
	stringstream ss(s);
	double z;
	ss >> z;
	return z;
}
void checkAddition(string s)
{
	size_t pos = s.find("+");
	if (pos != string::npos)
	{
		string first = s.substr(0, pos);
		string second = s.substr(pos + 1, s.length());
		double x = str2dub(first);
		double y = str2dub(second);
		double z = add(x, y);
		s = dub2str(z);
		cout << "= " << s << endl;
	}
}
void checkSubtraction(string s)
{
	size_t pos = s.find("-");
	if (pos != string::npos)
	{
		string first = s.substr(0, pos);
		string second = s.substr(pos + 1, s.length());
		double x = str2dub(first);
		double y = str2dub(second);
		double z = subtract(x, y);
		s = dub2str(z);
		cout << "= " << s << endl;
	}
}
void checkMultiplication(string s)
{
	size_t pos = s.find("*");
	if (pos != string::npos)
	{
		string first = s.substr(0, pos);
		string second = s.substr(pos + 1, s.length());
		double x = str2dub(first);
		double y = str2dub(second);
		double z = multiply(x, y);
		s = dub2str(z);
		cout << "= " << s << endl;
	}
}
void checkDivision(string s)
{
	size_t pos = s.find("/");
	if (pos != string::npos)
	{
		string first = s.substr(0, pos);
		string second = s.substr(pos + 1, s.length());
		double x = str2dub(first);
		double y = str2dub(second);
		double z = divide(x, y);
		s = dub2str(z);
		cout << "= " << s << endl;
	}
}
void checkExponent(string s)
{
	size_t pos = s.find("^");
	if (pos != string::npos)
	{
		string first = s.substr(0, pos);
		string second = s.substr(pos + 1, s.length());
		double x = str2dub(first);
		double y = str2dub(second);
		double z = exponent(x, y);
		s = dub2str(z);
		cout << "= " << s << endl;
	}
}
int main()
{
	double input[2] = {2,4};
	double inverse = 0;
	if (input[0] != 0)
	{
		inverse = 1 / input[0];
	}
	string instr = "";
	string first = "";
	string second = "";
	string out = "";
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