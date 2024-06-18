module;

#include <cstdint>

export module Module;

export using byte = uint8_t;
export using word = uint16_t;
export using dword = uint32_t;

export constexpr byte operator""_b(unsigned long long val) { return (byte)val; }
export constexpr word operator""_w(unsigned long long val) { return (word)val; }

export byte MyFunc()
{
	return 42_b;
}

#pragma pack(1)
export struct FarPtr16 {
	word off;
	word seg;
	FarPtr16(word seg, word off) : off(off), seg(seg) {}
	FarPtr16() : off(0), seg(0) {}
};
#pragma pack()

#pragma pack(1)
export struct ThreeBytes {
	byte first;
	byte second;
	byte third;
	ThreeBytes(byte first, byte second, byte third) : first(first), second(second), third(third) {}
};
#pragma pack()