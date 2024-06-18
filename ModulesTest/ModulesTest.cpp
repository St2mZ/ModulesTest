
#include <iostream>
#include "Header.h"

namespace {
    FarPtr16 MakeFarPointer(word seg, word off)
    {
        return{ off, seg };
    }
}

int main()
{
    byte a = 0x41_b;
    std::cout << a << MyFunc() << "\n";
    FarPtr16 p = MakeFarPointer(0x42_w, 0x43_w);
    std::cout << p.seg << p.off << "\n";
    ThreeBytes t{ 0, 1, 2 };
    std::cout << t.first << "\n";
}
