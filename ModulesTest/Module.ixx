module;

#include <cstdint>

export module Module;

export using byte = uint8_t;

/**/

export constexpr byte operator""_b(unsigned long long val) { return (byte)val; }

export byte MyFunc()
{
	return 42_b;
}

#pragma pack(1)
export struct TwoBytes {
	byte first;
	byte second;
	TwoBytes(byte first, byte second) : first(first), second(second) {}
};
#pragma pack()
