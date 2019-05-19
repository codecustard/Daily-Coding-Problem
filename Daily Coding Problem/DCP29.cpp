#include "DCP29.h"

#include <iostream>


DCP29::DCP29()
{
	std::cout << "Problem 29 \n";

	std::cout << "AAAABBBCCDAA -> " << Encode("AAAABBBCCDAA") << std::endl;
	std::cout << "DDDRARRR -> " << Encode("DDDRARRR") << std::endl;
	std::cout << "TTTTAAAEEA -> " << Encode("TTTTAAAEEA") << std::endl;
}


DCP29::~DCP29()
{
}

std::string DCP29::Encode(std::string str)
{
	/* PSUEDO
		Iterate through entire string.
		Hold an int "count"
		Hold a char "last"
		Hold a string "decoded"
		Check last char iterated, if it is similar to current char, increment "count"
		If it's not similar append to "decoded" using "count" and current char: decoded += "count" + str[i]
		return decoded
	*/
	int count = 0;
	char last = str.at(0);
	std::string decode = "";

	for (int i = 0; i < str.length(); i++)
	{
		if (str.at(i) == last)
		{
			count += 1;
		}
		else
		{
			decode += std::to_string(count);
			decode += last;

			count = 1;
			last = str.at(i);
		}
	}

	decode += std::to_string(count);
	decode += last;

	return decode;
}