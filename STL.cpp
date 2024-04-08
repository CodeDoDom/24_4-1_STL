//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      4월 4일 목요일			(5주 2일)
// 
// 4월 25일 (8주 1일) - 중간시험
//------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <array>
#include <algorithm>
#include "save.h"
#include "String.h"
//using namespace std;	// 사용하지 않고 코딩

extern bool 관찰;

//--------
int main()
//--------
{
	std::array<String, 5> a{
		"12341232312312312312312314123999999999",
		"23313143423123213243245324567463214567463213`3243565333",
		"213333333333333424121",
		"777777713231232312323123",
		"555551323213123213"
	};

	관찰 = true;
	// [문제] a의 각 String이 관리하는 글자를 오름차순으로 정렬하라.
	for (const String& s : a)
		std::sort(s.getData(), s.getData() + s.getLen());
	관찰 = false;

	for (String& s : a)
		std::cout << s << '\n';
	
	save("STL.cpp");
}
