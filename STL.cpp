//------------------------------------------------------------------------
// 2024.	1학기 STL 화56목56      3월 5일 화요일			(1주 1일)
// 
// VisualStudio 17.9 이상, Release x64
// 프로젝트 속성 - 언어 /std:c++latest
// 콘솔창 크기 80x25
// 
// 한학기 강의를 저장할 save 함수 작성하고 파일 분리
//------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
//using namespace std;	// 사용하지 않고 코딩

void save(std::string_view);

int main()
{
	std::cout << "2024 STL" << std::endl;
	save("STL.cpp");
}

void save(std::string_view fileName)
{
	// fileName을 읽기용으로 연다.
	std::ifstream in{ fileName.data() };	// ifstream은 자료형		// RAII

	//std::cout << sizeof in << std::endl;
	//std::cout << addressof(in) << std::endl;
	//std::cout << typeid(in).name() << std::endl;

	if (not in) {
		std::cout << fileName << " 열기 실패" << std::endl;
		exit(0);
	}

	// 저장할 파일을 덧붙여 쓰기모드로 연다.
	std::ofstream out{ "2024 1학기 STL 화56목56 강의저장.txt", std::ios::app };


	// 읽을 파일의 내용을 읽어 쓸 파일에 덧붙인다.
	// STL 자료구조와 알고리즘을 이용하여 기록한다.(좋은 방식 아님)
	std::vector<char> v{ std::istreambuf_iterator<char>{in}, {} };

	//for (char c : v)
	//	std::cout << c;

	out << std::endl << std::endl;
	std::copy(v.begin(), v.end(), std::ostreambuf_iterator<char>{out});
}