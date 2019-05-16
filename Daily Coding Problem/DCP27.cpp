#include "DCP27.h"

#include <iostream>
#include <vector>

DCP27::DCP27()
{
	std::cout << "Problem 27 \n";
	std::cout << "Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).\n";

	std::cout << "([)] : " << ValidateBrackets("([)]") << std::endl;
	std::cout << "((() : " << ValidateBrackets("((()") << std::endl;
	std::cout << "([])[]({}) : " << ValidateBrackets("([])[]({})") << std::endl;
	std::cout << "(int i = 0; i < str.length(); i++) : " << ValidateBrackets("(int i = 0; i < str.length(); i++)") << std::endl;
}


DCP27::~DCP27()
{
}

bool DCP27::ValidateBrackets(std::string str)
{
	/*
	Create empty "brackets" container
	Loop through string
		Search for '(', '[', '{', ')', ']', '}'
		switch (char)
			anything besides brackets -> move on to next char
			(, [, or {				  -> push_back char into "brackets" container, then move on to next char
			), ], or }				  -> check the last element of "brackets" container to see if it matches up, pop it off, then move on. 
		                                 return false if it doesn't match up

	return false if brackets is not empty
	return true if brackets is empty

	*/
	std::vector<char> brackets;
	char c;
	for (int i = 0; i < str.length(); i++)
	{
		c = str.at(i);
		
		switch (c)
		{
		case '(':
		case '[':
		case '{':
			brackets.push_back(c);
			break;
			
		case ')':
			if (brackets.size() == 0)
				return false;
			else if (brackets.back() == '(')
			{
				brackets.pop_back();
			}
			else
				return false;
			break;

		case ']':
			if (brackets.size() == 0)
				return false;

			else if (brackets.back() == '[')
			{
				brackets.pop_back();
			}
			else
				return false;
			break;

		case '}':
			if (brackets.size() == 0)
				return false;
			else if (brackets.back() == '{')
			{
				brackets.pop_back();
			}
			else
				return false;
			break;
		}
	}

	if (brackets.size() > 0)
		return false;
	return true;
}