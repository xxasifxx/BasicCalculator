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

// In general, ignore this file, but keep it around if you are using pre-compiled headers.
