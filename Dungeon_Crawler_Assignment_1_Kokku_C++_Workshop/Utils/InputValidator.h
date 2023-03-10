#pragma once

#include <iostream>
#include <string>
#include <regex>
#include <map>
#include <any>
#include <any>
using namespace std;

//regex regexInt("(\\+|-)?[[:digit:]]+");
regex regexInt("\\d+");
const regex regexOnlyLetters("[[:alpha:]]+");

enum class StringValidation { OnlyHave, MustHave };
enum class CharGroups { Letters, Space};
//enum class NumberValidation { LessThan = "\\d+" };

//map<int, regex> regexFromValidation = {
//	{ static_cast<int>(ValidationType::OnlyLetters), std::regex("[A-Za-z]+") },
//	{ static_cast<int>(ValidationType::OnlyDigits), std::regex("\\d+") },
//	{ static_cast<int>(ValidationType::EmailAddress), std::regex("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}") }
//};

class NumberValidationParameter 
{
public:
	//NumberValidation numberValidation;
	int number;
};

class InputValidator
{
public:
	bool StringValidation(StringValidation sv, CharGroups cg[], int maxSize = -1);
	bool NumberValidation(NumberValidationParameter param[]);
};
