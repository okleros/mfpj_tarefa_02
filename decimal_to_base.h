#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

const std::string alphabet_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const std::vector<char> alphabet_vector(alphabet_string.begin(), alphabet_string.end());

std::string concat_char_array(std::vector<char>);
std::string decimal_to_base(int, int);


std::string concat_char_array(std::vector<char> v)
{
	std::string result(v.begin(), v.end());

	return result;
}

std::string decimal_to_base(int num, int base)
{
	std::vector<char> result_vector;
	std::string result_string;

	int resto;

	while (num > 0)
	{
		resto = num % base;

		if (resto > 9 && base > 10)
			result_vector.push_back(alphabet_vector[resto - 10]);
		else
			result_vector.push_back(((char) resto) + '0');

		num /= base;

	}

	std::reverse(result_vector.begin(), result_vector.end());

	result_string = concat_char_array(result_vector);

	return result_string;
}