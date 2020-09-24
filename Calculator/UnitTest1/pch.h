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

double add(double x, double y);

double subtract(double x, double y);

double multiply(double x, double y);

double divide(double x, double y);

double exponent(double x, double y);

std::string dub2str(double z);

double str2dub(std::string s);

void checkAddition(std::string s);

void checkSubtraction(std::string s);

void checkMultiplication(std::string s);

void checkDivision(std::string s);

void checkExponent(std::string s);

#endif //PCH_H
