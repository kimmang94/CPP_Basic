#include <iostream>
using namespace std;

// char : 1byte
// short : 2byte
// int : 4byte
// __int64(long long) : 8byte

int hp;
short mp;

int main()
{
	hp = 0xF;
	mp = 15;

	cout << mp << hp; 
}
