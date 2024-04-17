#include <iostream>
#include "Helper.h"
using namespace std;

void AddHP(int hp, int value)
{

}

int main()
{
	int hp = 100;

	// [타입]* [이름];
	// - 주소값을 담는 바구니
	// - 주소값을 타고가면 -> 무엇이 있느냐?
	
	int* ptr = &hp;

	// hp주소에있는 값 호출
	cout << *ptr << endl << &hp << endl;

}


