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
	/*for (int num = 2; num <= 9; num++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << num << "*" << j << "=" << num * j << endl;
		}
	}*/
#pragma endregion

	// 간단한 전투
#pragma region 간단한 전투
	int round = 1;
	int hp = 100;
	int damage = 10;
	
	while (true)
	{
		// 전투 진행
		hp -= damage;
		if (hp <= 0)
		{
			hp = 0;
			cout << "Round : " << round << endl <<"몬스터 체력 : " << hp << endl;
			
		}

		if (hp == 0)
		{
			cout << "몬스터 처치!" << endl;
			break;
		}

		if (round == 5)
		{
			cout << "제한 라운드 종료" << endl;
			break;
		}
		round++;
	}
#pragma endregion

	// 가위 바위 보
}
