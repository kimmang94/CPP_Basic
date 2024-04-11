#include <iostream>
using namespace std;

int hp;
int b;

int main()
{
	hp = 100;

	hp -= 200;

	if (hp > 0)
	{
		cout << "생존";
	}
	else
	{
		cout << "사망";
	}
}
