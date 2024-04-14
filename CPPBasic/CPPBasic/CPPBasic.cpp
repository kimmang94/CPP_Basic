#include <iostream>
using namespace std;


/*
	Stack Memory
	      함수들이 사용하는 공용으로 사용하는 메모장
	High
		stack 영역은 고정되지않는다. 함수의 크기에따라 변동 (상대주소로 계산)
		global 변수(함수) 는 따로 제거하지않으면 계속 유지된다.
		local 변수(함수) 는 사용하고 제거되면서 공간이 정리된다.

		구글 스택프레임 검색

		-------------------------
		Main()
		
		매개변수 (10)
		반환 주소값 
		-------------------------
		Test(10);

		-------------------------
		int a = 10;


	Low
*/

/*
	32bit 64bit 차이점
	- 레지스터의 크기 
	- CPU에는 레지스터가 존재한다
*/


int Test(int a)
{
	int c = a ;

	return c;
}

int main()
{
	Test(10);

	int a = 10;
}
