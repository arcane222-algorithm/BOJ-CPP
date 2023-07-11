// BOJ-cpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <memory>
#include "stack/BOJ1662.h";

int main()
{
	//std::unique_ptr<Base> problemPtr = std::make_unique<BOJ::BOJ1662>(1662);
	//problemPtr->solve();

	BOJ::BOJ1662 problem(1662);
	problem.solve();
}