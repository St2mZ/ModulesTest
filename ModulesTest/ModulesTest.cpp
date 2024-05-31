
#include <iostream>
#include "Header.h"

int main()
{
    byte a = 0x41_b;
    std::cout << a << MyFunc() << "\n";
    TwoBytes p{ 0x42_b, 0x43_b };
    std::cout << p.first << p.second << "\n";
    //
}
