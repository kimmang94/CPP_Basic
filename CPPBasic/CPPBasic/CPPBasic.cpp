#include <iostream>
using namespace std;

int cnt;
int main()
{
	cin >> cnt;
	// 별찍기
#pragma region 별찍기
	//for (int i = 0; i <= cnt; i++)
	//{
	//	for (int j = 0; j <= i; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
#pragma endregion

	// 구구단
#pragma region 구구단
	for (int num = 2; num <= 9; num++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << num << "*" << j << "=" << num * j << endl;
		}
	}
#pragma endregion

	// 간단한 전투
	// 가위 바위 보
}
