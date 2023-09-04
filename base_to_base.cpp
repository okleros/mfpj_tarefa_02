#include "base_to_decimal.h"

// chamada num, base_atual, base_nova
std::string base_to_base(std::string, int, int);

int main(int argc, char const *argv[])
{
	std::cout << base_to_base(argv[1], std::stoi(argv[2]), std::stoi(argv[3]));

	return 0;
}

std::string base_to_base(std::string num, int base_atual, int base_nova)
{
	return decimal_to_base(std::stoi(base_to_decimal(num, base_atual)), base_nova);
}

