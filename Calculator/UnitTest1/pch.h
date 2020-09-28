// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H

// TODO: add headers that you want to pre-compile here
#include <iostream>
#include <string>
#include <sstream>

struct TwoVals
{
	std::string Val1;
	std::string Val2;
};

double add(double x, double y);

double subtract(double x, double y);

double multiply(double x, double y);

double divide(double x, double y);

double exponent(double x, double y);

void numTest(std::string s);

std::string dub2str(double z);

double str2dub(std::string s);

TwoVals checkAddition(TwoVals s);

TwoVals checkSubtraction(TwoVals s);

TwoVals checkMultiplication(TwoVals s);

TwoVals checkDivision(TwoVals s);

TwoVals checkExponent(TwoVals s);

#endif //PCH_H
