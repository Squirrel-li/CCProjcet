#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void printDino(char dino[10][105]) {
	for (int i = 0; i < 7; ++i) {
		printf("%s\n", dino[i]);
	}
}

void dinoAni(char a[10][105]) {
	char dino[10][105] =
	{
		"      ___",
		"     |  *|__",
		"     |    __|",
		"     |   |_",
		"\\____|   |",
		" \\______/",
		"   |  |",
	};

	int frames = 20;  // 動畫的幀數

	for (int frame = 0; frame < frames; ++frame) {
		system("cls");  // 如果你使用的是 Windows，可以取消此行的註釋

		// 使用條件判斷切換恐龍腿的狀態
		if (frame % 2 == 0) {
			dino[6][3] = '/';
			dino[6][6] = '\\';
		}
		else {
			dino[6][3] = '\\';
			dino[6][6] = '/';
		}

		printDino(dino);

		// 使用 Sleep 函數控制動畫速度
		Sleep(100); 
	}

	return 0;
}