#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "../include/CCProject.h"

#define SCREENWIDTH 100
#define SCREENHEIGHT 10

int main(void)
{
	int i, j, k;
	int tempData;

	int debug_count = 0;
	int gameStep = 4;

	char dino[SCREENHEIGHT][SCREENWIDTH + 5] =
	{
		"      ___",
		"     |  *|__",
		"     |    __|",
		"     |   |_",
		"\\____|   |",
		" \\______/",
		"   |  |",
	};

	

	char screenPoint[SCREENHEIGHT][SCREENWIDTH + 5] =
	{
		{"123456789                                                                                               \n"},
		{"2                                                                                                       \n"},
		{"3                                                                                                       \n"},
		{"4                                                                                                       \n"},
		{"5                                                                                                       \n"},
		{"6                                                                                                       \n"},
		{"7                                                                                                       \n"},
		{"********************************************************************************************************\n"},
		{"****#****#****#****#****#****#****#****#****#****#****#****#****#****#****#****#****#****#****#****#****\n"},
		{"0                                                                                                       \0"}
	};


	initConsole();
	
	//printf("%d  %d  %d  %d  %s\n\n", &screenPoint[0][0], &screenPoint[0][1], sizeof(screenPoint[0][0]), &screenPoint[0][0] + 1, *(&screenPoint[0] + sizeof(screenPoint[0][0])));
	//printf("%s\n\n", *(&screenPoint[0][0] + 1));

	//while (1) {}


	while (1)
	{
		gameStep++;
		
		screenScroll(screenPoint, gameStep);
		screenPrint(screenPoint);
		debug_count++;
		//printf("%d", debug_count);


		delay(100);
	}

	
	system("PAUSE");
	return 0;
}