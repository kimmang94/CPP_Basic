#include <iostream>
using namespace std;

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
struct StatInfo
{
	int hp;
	int attack;
	int defenct;
};

int main()
{
	// 포인터 연산
	// - 주소 연산자 (&)
	// - 산술 연산자 (+-)
	// - 간접 연산자 (*)
	// - 간접 멤버 연산자 (->)

	int hp = 100;
	hp += 50;

	int a = 10;
	int b = 20;
	int* c = &a;
	Swap(&a, &b);

	cout << a << endl;
	cout << &c << endl; // 주솟값을 가져온다
	cout << *c << endl; // 주솟값 안에 값을 가져온다
	cout << b << endl;

	// [] [] [666] [] [] [] [] []
	int numbers[100] = { 1,2,3,4,5,6 };

	int* ptr = numbers; //&number[0]; 이것과 같은 의미
	*(ptr+3) = 666; // ptr 에 접근한것이지 자체를 바꾸진 않음

	ptr += 3;
	*ptr = 123;

}


