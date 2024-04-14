#include <iostream>
using namespace std;

// Text RPG

enum PlayerType
{
	PT_None = 0,
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Mage = 3,
};

PlayerType playerType;
int hp;
int attack;
int defence;

void EnterLobby();
void SelectPlayer();

int main()
{
	EnterLobby();
}

void EnterLobby()
{
	while (true)
	{
		cout << "-------------------------" << endl;
		cout << "로비에 입장했습니다!" << endl;
		cout << "-------------------------" << endl;

		// 플레이어 직업 선택
		SelectPlayer();
		


	}
}

void SelectPlayer()
{
	while (true)
	{
		cout << "-------------------------" << endl;
		cout << "직업을 골라주세요!!" << endl;
		cout << "[1]기사 [2] 궁수 [3] 마법사" << endl;
		cout << "-------------------------" << endl;
		cout << "> ";

		int choice;
		cin >> choice;

		if (choice == PT_Knight)
		{
			cout << "기사 생성중..." << endl;
			hp = 150;
			attack = 10;
			defence = 5;
			playerType = PT_Knight;
			break;
		}
		else if (choice == PT_Archer)
		{
			cout << "궁수 생성중..." << endl;
			hp = 100;
			attack = 15;
			defence = 3;
			playerType = PT_Archer;
			break;
		}
		else if (choice == PT_Mage)
		{
			cout << "마법사 생성중..." << endl;
			hp = 80;
			attack = 25;
			defence = 0;
			playerType = PT_Mage;
			break;
		}

	}
	
}
