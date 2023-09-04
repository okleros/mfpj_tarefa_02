#include "base_to_decimal.h"

int main(int argc, char const *argv[])
{
	std::cout << base_to_decimal(argv[1], std::stoi(argv[2]));

	return 0;
}