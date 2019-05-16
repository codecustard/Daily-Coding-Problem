#pragma once
/*
Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).

For example, given the string "([])[]({})", you should return true.

Given the string "([)]" or "((()", you should return false.

Solution in DCP27::ValidateBrackets()
*/


#include <string>

class DCP27
{
public:
	DCP27();
	~DCP27();

	bool ValidateBrackets(std::string str);
};

