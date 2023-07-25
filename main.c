#include<stdio.h>
#include<conio.h>
int main() {
	int charX = 4;
	int charY = 5;
	int treasureX = 5;
	int treasureY = 0;
	int map[6][6] = {
		{0,1,0,0,0,0},
		{0,1,0,0,0,0},
		{0,1,0,1,1,1},
		{0,1,0,1,0,0},
		{0,0,0,0,0,0},
		{0,0,0,0,0,0}
	};
	while (1)
	{
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				if (j == charX && i == charY)
				{
					printf("в┴");
					continue;
				}
				if (j == treasureX && i == treasureY)
				{
					printf("б┌");
					continue;
				}
				switch (map[i][j])
				{
				case 0:
					printf("бр");
					break;
				case 1:
					printf("бс");
					break;
				default:
					break;
				}
			}
			printf("\n");
		}
		printf("\n");
		int key = _getch();
		// A
		if (key == 97)
		{
			if(charX != 0 && map[charY][charX-1] != 1)
			{
				map[charY][charX] = 0;
				map[charY][charX-1] = 2;
				charX--;
			}
		}
		//d
		else if (key == 100) {
			if (charX != 5 && map[charY][charX + 1] != 1)
			{
				map[charY][charX] = 0;
				map[charY][charX + 1] = 2;
				charX++;
			}
		}
		//w
		else if (key == 119) {
			if (charY != 0 && map[charY-1][charX] != 1)
			{
				map[charY][charX] = 0;
				map[charY-1][charX] = 2;
				charY--;
			}
		}
		//s
		else if (key == 115) {
			if (charY != 5 && map[charY+1][charX] != 1)
			{
				map[charY][charX] = 0;
				map[charY+1][charX] = 2;
				charY++;
			}
		}
		if (charX == treasureX && charY == treasureY)
		{
			break;
		}
	}
	printf("clear");
}