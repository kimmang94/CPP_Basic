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
enum MonsterType
{
	MT_None = 0,
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton = 3,
};

MonsterType monsterType;

int monsterHp;
int monsterAttack;
int monsterDefence;

void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateRandomMonster();
void EnterBattle();

int main()
{
	srand(time(0));
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

		cout << "-------------------------" << endl;
		cout << "[1] 필드입장 [2] 게임종료" << endl;
		cout << "-------------------------" << endl;

		int input;
		cin >> input;

		if (input == 1)
		{
			EnterField();
		}
		else
		{
			return;
		}
		


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

void EnterField()
{
	while (true)
	{
		cout << "-------------------------" << endl;
		cout << "필드에 입장 했습니다!!" << endl;
		cout << "-------------------------" << endl;

		cout << "[PLAYER] HP : " << hp << "/ ATT : " << attack << "/ DEF : " << defence << endl;

		// 몬스터 스폰
		CreateRandomMonster();

		cout << "-------------------------" << endl;
		cout << "[1] 전투 [2] 도주" << endl;
		cout << "-------------------------" << endl;
		cout << "> ";

		int input;
		cin >> input;

		if (input == 1)
		{
			EnterBattle();
		}
		else
		{
			break;
		}
	}

}

void CreateRandomMonster()
{
	int randomChoice = 1 + (rand() % 3);

	switch (randomChoice)
	{
		case MT_Slime:
			cout << "슬라임 생성중.. [HP 30 / ATT : 2 / DEF : 0]" << endl;
			monsterHp = 30;
			monsterAttack = 2;
			monsterDefence = 0;
			monsterType = MT_Slime;
			break;
		case MT_Orc:
			cout << "오크 생성중.. [HP 40 / ATT : 10 / DEF : 3]" << endl;
			monsterHp = 40;
			monsterAttack = 10;
			monsterDefence = 3;
			monsterType = MT_Orc;
			break;
		case MT_Skeleton:
			cout << "스켈레톤 생성중.. [HP 80 / ATT : 15/ DEF : 5]" << endl;
			monsterHp = 80;
			monsterAttack = 15;
			monsterDefence = 5;
			monsterType = MT_Skeleton;
			break;
	}
}

void EnterBattle()
{
	while (true)
	{
		int damage = attack - monsterDefence;
		if (damage < 0)
		{
			damage = 0;
		}

		// 선빵
		monsterHp -= damage;
		if (monsterHp < 0)
		{
			monsterHp = 0;
		}

		cout << "몬스터 남은 체력  : " << monsterHp << endl;

		if (monsterHp == 0)
		{
			cout << "몬스터 처치!" << endl;
			return;
		}

		// 반격

		damage = monsterAttack - defence;
		if (damage < 0)
			damage = 0;

		hp -= damage;
		if (hp < 0)
			hp = 0;

		cout << "Player 의 남은 체력 : " << hp << endl;
		if (hp == 0)
		{
			cout << "당신은 사망하였습니다" << endl;
			return;
		}
	}
}
