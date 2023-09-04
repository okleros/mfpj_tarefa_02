#include "decimal_to_base.h"

int main(int argc, char const *argv[])
{
	std::cout << decimal_to_base(std::stoi(argv[1]), std::stoi(argv[2]));

	return 0;
}