#include <iostream>
#include "Helper.h"
using namespace std;

// 배열에 대한 이해

struct StatInfo
{
	int hp;
	int damage;
	int defence;
};

// [][][][][][]
int main()
{
	//StatInfo monster[10];

	int arr[5];

	int arr1[5] = { 1, 2, 3, 4, 5 };

	/*arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;*/

	for (int i = 0; i < 5; i++)
		arr[i] = i * 10;

	for (int i = 0; i < 5; i++)
		cout << arr[i] << endl;
}


