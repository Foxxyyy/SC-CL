#pragma once

#include <iostream>
#include <stdint.h>
#include <vector>
#include "windows.h"
#include "ConsoleColor.h"
#include "../Crypto/aes256.h"
#include "../Compression/zlib.h"
#include <unordered_map>


#ifdef _MSC_VER
#define __builtin_bswap16 _byteswap_ushort
#define __builtin_bswap32 _byteswap_ulong
#define __builtin_bswap64 _byteswap_uint64
#endif

#define STREAMSIZE_MAX 9223372036854775807

#ifndef TEST
#ifdef _DEBUG
#define TEST(cond, reasonStr, ...) assert((cond) && (reasonStr))
#else
#define TEST(cond, reasonStr) if (!(cond)) Utils::System::Throw(reasonStr)
#endif
#endif

namespace Utils {

	namespace Hashing
	{
		uint32_t Joaat(const char* key);
		uint32_t Joaat(const std::string& key);
		uint32_t JoaatCased(const char* key);
		uint32_t JoaatCased(const std::string& key);
	}
	namespace DataConversion
	{
		inline uint32_t FloatToUInt(float x) { return *(uint32_t*)&x; }
		inline int32_t FloatToInt(float x) { return *(int32_t*)&x; }
		inline float UIntToFloat(uint32_t x) { return *(float*)&x; }
		inline float IntToFloat(int32_t x) { return *(float*)&x; }

		template<typename IntType>
		std::string IntToHex(IntType val)
		{
			const char* hex_str = "0123456789ABCDEF";
			uint8_t* bin = (uint8_t*)&val;

			std::string str(sizeof(IntType) * 2, '\0');

			for (uint32_t i = 0; i < sizeof(IntType); i++)
			{
				str[i * 2 + 0] = hex_str[(bin[i] >> 4) & 0x0F];
				str[i * 2 + 1] = hex_str[(bin[i]) & 0x0F];
			}
			return str;
		}
		inline int32_t IntToPointerInt(int32_t x) { return 0x50000000 | x; }
		struct NamedUint32
		{
			const char* str;
			uint32_t val;
		};

		std::vector<NamedUint32> ReorderUint32Vector(std::vector<uint32_t> vec, std::vector<const char*> name, bool isSmallToBig);
		void ArrayReverse(std::vector<uint8_t> InArr, std::vector<uint8_t>& OutArr);

	}
	namespace Bitwise
	{
		inline int16_t SwapEndian(int16_t x) { return __builtin_bswap16((uint16_t)x); }
		inline int32_t SwapEndian(int32_t x) { return __builtin_bswap32((uint32_t)x); }
		inline float SwapEndian(float x) { return Utils::DataConversion::UIntToFloat(__builtin_bswap32(Utils::DataConversion::FloatToUInt(x))); }
		inline int64_t SwapEndian(int64_t x) { return __builtin_bswap64((uint64_t)x); }
		inline uint16_t SwapEndian(uint16_t x) { return __builtin_bswap16(x); }
		inline uint32_t SwapEndian(uint32_t x) { return __builtin_bswap32(x); }
		inline uint64_t SwapEndian(uint64_t x) { return __builtin_bswap64(x); }
		uint32_t Flip2BytesIn4(uint32_t value);
		inline int GMask(int rangeStart, int rangeEnd) { return (1 << rangeEnd) - (1 << rangeStart); }
		inline int ExtractBitsAtIndex(int num, int index, int count) { return (GMask(index, index + count) & num) >> index; }
		int32_t __fastcall set_bits_in_range(uint32_t *varToSet, uint32_t rangeStart, uint32_t rangeEnd, int32_t sourceNum);
		int32_t __fastcall get_bits_in_range(int32_t value, uint32_t rangeStart, uint32_t rangeEnd);
		uint32_t revbitmask(uint32_t index);
		uint32_t bitCountToIntEnd(uint32_t rangeStart, uint32_t count);
	}
	namespace IO
	{
		void LoadData(const char* path, std::vector<uint8_t>& out);
		bool CheckFopenFile(const char* path, FILE* file);
		bool CreateFileWithDir(const char* path, FILE*& file);
		inline std::string GetDir(const std::string &Dir)
		{
			const size_t BaseExtPos = Dir.find_last_of("/\\") + 1;
			return BaseExtPos == Dir.npos ? "" : Dir.substr(0, BaseExtPos);
		}
        bool LoadCSVMap(const std::string& path, bool hasHeader, int keyBase, std::unordered_map<uint64_t, uint64_t>& map, bool reverse);

        std::string GetExecutablePath();
	}
	namespace System
	{
		void Pause(const std::string& str = "");
		void Throw(const std::string& str);
		void Warn(const std::string& str);
	}
	namespace Math
	{
		inline int64_t CeilDivInt(uint32_t a, uint32_t b) { return a == 0 || b == 0 ? 0 : 1 + ((a - 1) / b); }
		inline int32_t DivInt(uint32_t a, uint32_t b) { return a == 0 || b == 0 ? 0 : a / b; }
	}
	namespace Compression
	{
		int32_t XCompress_Decompress(uint8_t* compressedData, uint64_t compressedLen, uint8_t* decompressedData, uint64_t* decompressedLen);
		int32_t XCompress_Compress(uint8_t* Data, uint64_t DataLen, uint8_t* CompressedData, uint64_t* OutCompressedLen);
        void ZStandard_Compress(uint8_t* Data, uint64_t DataLen, std::vector<uint8_t>& CompressedData, uint64_t* OutCompressedLen);
		void ZLIB_Decompress(const std::vector<uint8_t>& in, std::vector<uint8_t> &out);
        void ZLIB_Compress(const std::vector<uint8_t>& in, std::vector<uint8_t> &out);
		std::string ZLIB_ErrorCodeToStr(int32_t errorcode);
	}
	namespace Crypt
	{
		bool AES_Decrypt(uint8_t * data, size_t length, const uint8_t key[32]);
		bool AES_Encrypt(uint8_t * data, size_t length, const uint8_t key[32]);
	}

}
