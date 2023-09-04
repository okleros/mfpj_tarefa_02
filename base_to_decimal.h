#include "decimal_to_base.h"
#include <cmath>

int index(std::vector<char>, char);
std::string base_to_decimal(std::string, int);

std::string base_to_decimal(std::string num, int base)
{
	std::vector<char> num_vector(num.begin(), num.end());

	std::reverse(num_vector.begin(), num_vector.end());

	int result = 0;

	for (int i = 0; i < num_vector.size(); ++i)
	{
		if (std::isdigit(num_vector[i]))
			result += ((int)(num_vector[i] - '0')) * (std::pow(base, i));
		else
			result += (index(alphabet_vector, num_vector[i]) + 10) * (std::pow(base, i));
	}

	return std::to_string(result);
}

int index(std::vector<char> v, char k)
{
	return find(v.begin(), v.end(), k) - v.begin();
}