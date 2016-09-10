#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <string>
#include <fstream>
#include <algorithm>
#include "Utils.h"
#include "ConsoleColor.h"

using namespace std;
using namespace Utils::System;
using namespace Utils::Bitwise;



namespace Utils {

	namespace IO
	{
		DLX LoadData(const char* loc) {
			ifstream is(loc, std::ios::in | std::ios::binary | std::ios::ate);
			DLX File;

			if (is.is_open()) {
				is.seekg(0, is.end);
				size_t datasize = is.tellg();
				is.seekg(0, is.beg);

				File.data = new char[datasize];
				File.length = datasize;
				is.read((char*)File.data, datasize);
				is.close();
			}
			else
				Throw("Input File Could Not Be Opened");

			return File;
		}

	}

	namespace System
	{
		void Throw(string str)
		{
			cout << brightred << "Exception: " << white << str << "\r\nPress ENTER to exit..." << flush;
			cin.clear();
			cin.ignore(STREAMSIZE_MAX, '\n');
			exit(EXIT_FAILURE);
		}
		void Throw(string str, int line, int col)
		{
			cout << brightred << "Exception: " << white << str
				<< "\r\nLine: " << line
				<< "\r\nColumn: " << col
				<< "\r\nPress ENTER to exit..." << flush;
			cin.clear();
			cin.ignore(STREAMSIZE_MAX, '\n');
			exit(EXIT_FAILURE);
		}
		void Throw(string str, clang::Rewriter writer, clang::SourceLocation location)
		{
			location = writer.getSourceMgr().getExpansionLoc(location);
			int col = ClangUtils::GetColumnFromLocation(writer, location);
			cout << brightred << "Exception: " << white << str
				<< "\r\nFile: " << ClangUtils::GetFileFromLocation(writer, location)
				<< "\r\n(Line:Col): (" << ClangUtils::GetLineFromLocation(writer, location) << ":" << col << ")"
				<< "\r\n----->" << ClangUtils::GetLineStringFromLocation(writer, location)
				<< endl << "      ";
			for(int i = 0; i <col; i++)
			{
				cout << " ";
			}
			cout << brightred << "^\r\n" << white << "\r\nPress ENTER to exit..." << flush;
			cin.clear();
			cin.ignore(STREAMSIZE_MAX, '\n');
			exit(EXIT_FAILURE);
		}
		void Throw(string str, clang::Rewriter writer, clang::SourceLocation start, clang::SourceLocation end)
		{
			clang::SourceLocation startExp = writer.getSourceMgr().getExpansionLoc(start);
			clang::SourceLocation endExp = writer.getSourceMgr().getExpansionLoc(end);
			if(startExp.getRawEncoding() > endExp.getRawEncoding())
			{
				clang::SourceLocation temp = startExp;
				startExp = endExp;
				endExp = temp;
			}
			else if(startExp.getRawEncoding() == endExp.getRawEncoding())
			{
				Warn(str, writer, start);//same position, just use default output
				return;
			}
			if(writer.getSourceMgr().getFileID(startExp).getHashValue() != writer.getSourceMgr().getFileID(endExp).getHashValue())//different files(should never happen)
			{
				uint32_t col = ClangUtils::GetColumnFromLocation(writer, startExp);
				cout << brightred << "Exception: " << white << str
					<< "\r\nFile: " << ClangUtils::GetFileFromLocation(writer, startExp)
					<< "\r\n(Line:Col): (" << ClangUtils::GetLineFromLocation(writer, startExp) << ":" << col << ")"
					<< "\r\n----->" << ClangUtils::GetLineStringFromLocation(writer, startExp)
					<< endl << "     ";
				for(uint32_t i = 0; i <col; i++)
				{
					cout << " ";
				}
				cout << brightred << "^\r\n" << white << "\r\nPress ENTER to exit..." << flush;
				cin.clear();
				cin.ignore(STREAMSIZE_MAX, '\n');
				exit(EXIT_FAILURE);
			}
			else
			{
				uint32_t lineS = ClangUtils::GetLineFromLocation(writer, startExp);
				uint32_t lineE = ClangUtils::GetLineFromLocation(writer, endExp);
				uint32_t colS = ClangUtils::GetColumnFromLocation(writer, startExp);
				uint32_t colE = ClangUtils::GetColumnFromLocation(writer, endExp);
				if(lineS == lineE)
				{
					cout << brightred << "Exception: " << white << str
						<< "\r\nFile: " << ClangUtils::GetFileFromLocation(writer, startExp)
						<< "\r\n(Line:Col): (" << ClangUtils::GetLineFromLocation(writer, startExp) << ":" << colS << "-" << colE << ")"
						<< "\r\n----->" << ClangUtils::GetLineStringFromLocation(writer, startExp)
						<< endl << "     ";
					for(uint32_t i = 0; i < colS; i++)
					{
						cout << " ";
					}
					cout << brightred << "^";
					for(uint32_t i = colS + 1; i < colE; i++)
					{
						cout << "-";
					}
					cout << "^\r\n" << white << "\r\nPress ENTER to exit..." << flush;
					cin.clear();
					cin.ignore(STREAMSIZE_MAX, '\n');
					exit(EXIT_FAILURE);
				}
				else
				{
					string linetext = ClangUtils::GetLineStringFromLocation(writer, startExp);
					cout << brightred << "Exception: " << white << str
						<< "\r\nFile: " << ClangUtils::GetFileFromLocation(writer, startExp)
						<< "\r\n(Line:Col): (" << ClangUtils::GetLineFromLocation(writer, startExp) << ":" << colS << ") - ("
						<< ClangUtils::GetLineFromLocation(writer, endExp) << " : " << colE << ")"
						<< "\r\n----->" << linetext
						<< endl << "     ";
					for(uint32_t i = 0; i < colS; i++)
					{
						cout << " ";
					}
					cout << brightred << "^";
					for(int i = colS; i <linetext.size(); i++)
					{
						cout << "-";
					}
					if(lineE - lineS > 1)
					{
						cout << "\r\n     ...";
					}
					cout << white << "\r\n----->" << ClangUtils::GetLineStringFromLocation(writer, endExp) << brightred
						<< endl << "     ";
					for(uint32_t i = 0; i < colS; i++)
					{
						cout << "-";
					}
					cout << "^\r\n" << white << "\r\nPress ENTER to exit..." << flush;
					cin.clear();
					cin.ignore(STREAMSIZE_MAX, '\n');
					exit(EXIT_FAILURE);
				}
			}
		}
		void Throw(string str, clang::Rewriter writer, clang::SourceRange range)
		{
			Throw(str, writer, range.getBegin(), range.getEnd());
		}
		void Warn(string str)
		{
			cout << brightyellow << "Warning: " << white << str << endl;
		}
		void Warn(string str, clang::Rewriter writer, clang::SourceLocation location)
		{
			location = writer.getSourceMgr().getExpansionLoc(location);
			uint32_t col = ClangUtils::GetColumnFromLocation(writer, location);
			cout << brightyellow << "Warning: " << white << str
				<< "\r\nFile: " << ClangUtils::GetFileFromLocation(writer, location)
				<< "\r\n(Line:Col): (" << ClangUtils::GetLineFromLocation(writer, location) << ":" << col << ")"
				<< "\r\n----->" << ClangUtils::GetLineStringFromLocation(writer, location)
				<< endl << "     ";
			for(uint32_t i = 0; i <col; i++)
			{
				cout << " ";
			}
			cout << brightyellow << "^\r\n\r\n" << white;

		}
		void Warn(string str, clang::Rewriter writer, clang::SourceLocation start, clang::SourceLocation end)
		{
			clang::SourceLocation startExp = writer.getSourceMgr().getExpansionLoc(start);
			clang::SourceLocation endExp = writer.getSourceMgr().getExpansionLoc(end);
			if (startExp.getRawEncoding() > endExp.getRawEncoding())
			{
				clang::SourceLocation temp = startExp;
				startExp = endExp;
				endExp = temp;
			}
			else if (startExp.getRawEncoding() == endExp.getRawEncoding())
			{
				Warn(str, writer, start);//same position, just use default output
				return;
			}
			if (writer.getSourceMgr().getFileID(startExp).getHashValue() != writer.getSourceMgr().getFileID(endExp).getHashValue())//different files(should never happen)
			{
				uint32_t col = ClangUtils::GetColumnFromLocation(writer, startExp);
				cout << brightyellow << "Warning: " << white << str
					<< "\r\nFile: " << ClangUtils::GetFileFromLocation(writer, startExp)
					<< "\r\n(Line:Col): (" << ClangUtils::GetLineFromLocation(writer, startExp) << ":" << col << ")"
					<< "\r\n----->" << ClangUtils::GetLineStringFromLocation(writer, startExp)
					<< endl << "     ";
				for(uint32_t i = 0; i <col; i++)
				{
					cout << " ";
				}
				cout << brightyellow << "^\r\n\r\n" << white;
			}
			else
			{
				uint32_t lineS = ClangUtils::GetLineFromLocation(writer, startExp);
				uint32_t lineE = ClangUtils::GetLineFromLocation(writer, endExp);
				uint32_t colS = ClangUtils::GetColumnFromLocation(writer, startExp);
				uint32_t colE = ClangUtils::GetColumnFromLocation(writer, endExp);
				if(lineS == lineE)
				{
					cout << brightyellow << "Warning: " << white << str
						<< "\r\nFile: " << ClangUtils::GetFileFromLocation(writer, startExp)
						<< "\r\n(Line:Col): (" << ClangUtils::GetLineFromLocation(writer, startExp) << ":" << colS << "-" << colE << ")"
						<< "\r\n----->" << ClangUtils::GetLineStringFromLocation(writer, startExp)
						<< endl << "     ";
					for(uint32_t i = 0; i < colS; i++)
					{
						cout << " ";
					}
					cout << brightyellow << "^";
					for(uint32_t i = colS + 1; i < colE; i++)
					{
						cout << "-";
					}
					cout << "^\r\n\r\n" << white;
				}
				else
				{
					string linetext = ClangUtils::GetLineStringFromLocation(writer, startExp);
					cout << brightyellow << "Warning: " << white << str
						<< "\r\nFile: " << ClangUtils::GetFileFromLocation(writer, startExp)
						<< "\r\n(Line:Col): (" << ClangUtils::GetLineFromLocation(writer, startExp) << ":" << colS << ") - (" 
						<< ClangUtils::GetLineFromLocation(writer, endExp) << " : " << colE << ")"
						<< "\r\n----->" << linetext
						<< endl << "     ";
					for(uint32_t i = 0; i < colS; i++)
					{
						cout << " ";
					}
					cout << brightyellow << "^";
					for (int i = colS; i <linetext.size();i++)
					{
						cout << "-";
					}
					if (lineE - lineS > 1)
					{
						cout << "\r\n     ...";
					}
					cout << white << "\r\n----->" << ClangUtils::GetLineStringFromLocation(writer, endExp) << brightyellow
						<< endl << "     ";
					for(uint32_t i = 0; i < colS; i++)
					{
						cout << "-";
					}
					cout << "^\r\n\r\n" << white;
				}
			}
		}
		void Warn(string str, clang::Rewriter writer, clang::SourceRange range)
		{
			Warn(str, writer, range.getBegin(), range.getEnd());
		}
		void Pause(string str)
		{
			if (str != "")
				cout << str << "\n";
			cout << "Press ENTER to continue..." << flush;
			cin.clear();
			cin.ignore(STREAMSIZE_MAX, '\n');
		}
	}

	namespace DataConversion
	{
		char* IntToHex(uint32_t val)
		{
			const char hex_str[] = "0123456789ABCDEF";
			uint8_t* bin = (uint8_t*)&val;

			char str[9];

			for (uint32_t i = 0; i < 4; i++)
			{
				str[i * 2 + 0] = hex_str[(bin[i] >> 4) & 0x0F];
				str[i * 2 + 1] = hex_str[(bin[i]) & 0x0F];
			}
			str[8] = '\0';
			return str;
		}

		vector<NamedUint32> ReorderUint32Vector_SmallToBig(vector<uint32_t> vec, vector<const char*> name)
		{
			vector<NamedUint32> ret;
			ret.reserve(vec.size() + name.size());


			for (uint32_t i = 0; vec.size() != 0; i++)
			{
				uint32_t index = -(vec.begin() - min_element(vec.begin(), vec.end()));
				if (index > vec.size())
					Throw("ReorderUint32Vector Out Of Bounds");

				ret.push_back({ name[index],vec[index] });
				vec.erase(vec.begin() + index);
				name.erase(name.begin() + index);

			}

			return ret;
		}

		void ArrayReverse(vector<uint8_t> InArr, vector<uint8_t>& OutArr)
		{
			uint32_t InSize = InArr.size(), InSizeLoop = InSize - 1, i = 0;

			if (OutArr.size() != InSize)
				OutArr.resize(InSize);

			for (; i < InSize; i++, InSizeLoop--)
				OutArr[i] = InArr[InSizeLoop];
		}
	}

	namespace Hashing
	{
		uint32_t Joaat(char* key)
		{
			uint32_t hash, i;
			for (hash = i = 0; key[i]; ++i)
			{
				hash += tolower(key[i]);
				hash += (hash << 10);
				hash ^= (hash >> 6);
			}
			hash += (hash << 3);
			hash ^= (hash >> 11);
			hash += (hash << 15);
			return hash;
		}
		uint32_t JoaatCased(char* key)
		{
			uint32_t hash, i;
			for (hash = i = 0; key[i]; ++i)
			{
				hash += key[i];
				hash += (hash << 10);
				hash ^= (hash >> 6);
			}
			hash += (hash << 3);
			hash ^= (hash >> 11);
			hash += (hash << 15);
			return hash;
		}
	}

	namespace Bitwise
	{
		uint32_t Flip2BytesIn4(uint32_t value)
		{
			short* ptr = (short*)&value;
			short ret[2] = { ptr[1], ptr[0] };
			return *(uint32_t*)ret;
		}
	}

	namespace ClangUtils
	{
		uint32_t GetLineFromLocation(clang::Rewriter writer, clang::SourceLocation location)
		{
			return writer.getSourceMgr().getPresumedLoc(location).getLine();
		}
		uint32_t GetColumnFromLocation(clang::Rewriter writer, clang::SourceLocation location)
		{
			return writer.getSourceMgr().getPresumedLoc(location).getColumn();
		}
		string GetFileFromLocation(clang::Rewriter writer, clang::SourceLocation location)
		{
			return writer.getSourceMgr().getFilename(location).str();
		}
		string GetLineStringFromLocation(clang::Rewriter writer, clang::SourceLocation location)
		{
			uint32_t col = GetColumnFromLocation(writer, location);
			clang::SourceLocation start = location.getLocWithOffset(1-col);
			const char* lineStart = writer.getSourceMgr().getCharacterData(start);
			int len = 0;
			while(lineStart[len] != '\n' && lineStart[len] != '\r' && lineStart[len] != '\0')
				len++;
			string line(lineStart, len);
			replace(line.begin(), line.end(), '\t', ' ');//replace tabs with spaces so ^ aligns nicely on the console
			return line;
		}

	}

}
