#include "Player.h"
#include "Map.h"

int GPlayerX = 2;
int GPlayerY = 2;

void MovePlayer(int x, int y)
{
	// ���� üũ
	if (x < 0 || x >= MAP_SIZE)
		return;
	if (y < 0 || y >= MAP_SIZE)
		return;

	// �� üũ
	int index = y * MAP_SIZE + x;
	if (GMap1D[index] == 1)
		return;

	// ���� ��ġ ����
	{
		int index = GPlayerY * MAP_SIZE + GPlayerX;
		GMap1D[index] = 0;
	}

	// �� ��ġ �̵�
	{
		GPlayerX = x;
		GPlayerY = y;
		int index = GPlayerY * MAP_SIZE + GPlayerX;
		GMap1D[index] = 2;
	}
}