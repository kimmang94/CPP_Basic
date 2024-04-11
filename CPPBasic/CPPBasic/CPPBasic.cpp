#include <iostream>
using namespace std;

int cnt;
int main()
{
	cin >> cnt;
	// 별찍기
#pragma region 별찍기
	for (int i = 0; i <= cnt; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#pragma endregion

	
	// 구구단
	// 간단한 전투
	// 가위 바위 보
}
