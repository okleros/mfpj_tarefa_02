#include "decimal_to_base.h"

int main(int argc, const char** argv)
{
    int num = std::stoi(argv[1]);

    std::cout << "Binário: " << decimal_to_base(num, 2) << std::endl;
    std::cout << "Octal: " << decimal_to_base(num, 8) << std::endl;
    std::cout << "Hexadecimal: " << decimal_to_base(num, 16) << std::endl;

    return 1;
}