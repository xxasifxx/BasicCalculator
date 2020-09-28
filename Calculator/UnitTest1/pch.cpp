// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#pragma once
#include "pch.h"

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

void numTest(string s)
{
	try
	{
		int count = 0;
		for (size_t i = 0; i < s.length(); i++)
		{
			char ch;
			ch = s.at(i);
			/*
			if (ch > *"9" || ch < *"0" || ch != *".")
			{
				throw "Non numeric input";
			}
			*/
			if (ch == *".")
			{
				count++;
			}
			if (count > 1)
			{
				throw "Too many periods";
			}
		}
	}
	catch (const char* msg) {
		cout << endl;
		cerr << msg << endl;
	}
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
	numTest(s);
	stringstream ss(s);
	double z;
	ss >> z;
	return z;
}
TwoVals Finder(string s, string t)
{
	TwoVals Found = { s, "" };
	size_t pos = s.find(t);
	if (pos != string::npos)
	{
		string first = s.substr(0, pos);
		string second = s.substr(pos + 1, s.length());
		Found = { first, second };
	}
	return Found;
}
TwoVals checkAddition(TwoVals s)
{
	TwoVals result = s;
	result = Finder(result.Val1, "+");
	if (result.Val2 != "")
	{
		double x = str2dub(result.Val1);
		double y = str2dub(result.Val2);
		double z = add(x, y);
		result = { dub2str(z), "" };
	}
	return result;
}
TwoVals checkSubtraction(TwoVals s)
{
	TwoVals result = s;
	result = Finder(result.Val1, "-");
	if (result.Val2 != "")
	{
		double x = str2dub(result.Val1);
		double y = str2dub(result.Val2);
		double z = subtract(x, y);
		result = { dub2str(z), "" };
	}
	return result;
}
TwoVals checkMultiplication(TwoVals s)
{
	TwoVals result = s;
	result = Finder(result.Val1, "*");
	if (result.Val2 != "")
	{
		double x = str2dub(result.Val1);
		double y = str2dub(result.Val2);
		double z = multiply(x, y);
		result = { dub2str(z), "" };
	}
	return result;
}
TwoVals checkDivision(TwoVals s)
{
	TwoVals result = s;
	result = Finder(result.Val1, "/");
	if (result.Val2 != "")
	{
		double x = str2dub(result.Val1);
		double y = str2dub(result.Val2);
		double z = divide(x, y);
		result = { dub2str(z), "" };
	}
	return result;
}
TwoVals checkExponent(TwoVals s)
{
	TwoVals result = s;
	result = Finder(result.Val1, "^");
	if (result.Val2 != "")
	{
		double x = str2dub(result.Val1);
		double y = str2dub(result.Val2);
		double z = exponent(x, y);
		result = { dub2str(z), "" };
	}
	return result;
}
