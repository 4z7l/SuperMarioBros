#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<process.h>


int isGameOver = 0;
int nextStage = 0;
int isGameClear = 0;
extern int marioLife;
extern int stage;
DWORD WINAPI InputProcess(LPVOID);
DWORD WINAPI EnemyProcess(LPVOID);
DWORD WINAPI ScreenProcess(LPVOID);
DWORD WINAPI MarioProcess(LPVOID);
int GetFontSize(HANDLE windowHandle, COORD* size);
int SetFontSize(HANDLE windowHandle, COORD size);


int main() 
{
	/*===============================Initialize===============================*/
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD size;
	size.X = 5; size.Y = 5;

	SetFontSize(h, size);
	system("mode con:cols=480 lines=140");
	BackGoundInitialize();
	LoadStage(stage);

	/*===============================Thread===============================*/
	HANDLE hThrd_input;
	HANDLE hThrd_Enemy;
	HANDLE hThrd_Screen;
	HANDLE hThrd_Mario;
	DWORD threadId;
	int i = 0;

	hThrd_input = CreateThread(NULL,
		0,
		InputProcess, 
		(LPVOID)1,
		0,
		&threadId);
	if (hThrd_input)
	{
		printf("Thread launched %d\n", i);
		CloseHandle(hThrd_input);
	}

	hThrd_Enemy = CreateThread(NULL,
		0,
		EnemyProcess, 
		(LPVOID)2, 
		0,
		&threadId);
	if (hThrd_Enemy)
	{
		printf("Thread launched %d\n", i);
		CloseHandle(hThrd_Enemy);
	}


	hThrd_Mario = CreateThread(NULL,
		0,
		MarioProcess,
		(LPVOID)1,
		0,
		&threadId);
	if (hThrd_Mario)
	{
		printf("Thread launched %d\n", i);
		CloseHandle(hThrd_Mario);
	}

	//hThrd_Screen = CreateThread(NULL,
	//	0,
	//	ScreenProcess,
	//	(LPVOID)1,
	//	0,
	//	&threadId);
	//if (hThrd_Screen)
	//{
	//	printf("Thread launched %d\n", i);
	//	CloseHandle(hThrd_Screen);
	//}



	// Wait for threads to complete.
	while (marioLife)
	{
		if (isGameOver == 1) {
			marioLife -= 1;

			playMarioDieSound();

			LoadStage(stage);
			drawGameOverScreen();
			Sleep(3000);
			isGameOver = 0;

			if (marioLife == 0) {
				playGameOverSound();
				Sleep(3000);
				return;
			}

			drawMap();
		}

		if (nextStage == 1)
		{
			if (stage == 15) stage = 20;
			if (stage == 25) stage = 30;
			if (stage == 39) stage = 40;
			if (stage == 32) stage = 33;
			LoadStage(++stage);
			drawGameOverScreen();
			Sleep(3000);
			nextStage = 0;

			drawMap();
		}

		if (isGameClear)
		{
			return;
		}


	}

	playGameOverSound();
	return;
}



DWORD WINAPI InputProcess(LPVOID i)
{
	runGame();
}

DWORD WINAPI EnemyProcess(LPVOID j)
{
	while(1)
	{
		Bird_Die();
		Gumba_Die();
		Turtle_Die();

		Gumba_Move();
		Gumba_Gravity();

		Bird_Move();

		Turtle_Move();
		Turtle_Gravity();

		Podoboo_Move();
		Podoboo_Gravity();

		Koopa_Move();

		Item_die();

		Sleep(100);
		if (isGameOver||nextStage) {
			Sleep(3000);
		}

	
	}
}

DWORD WINAPI MarioProcess(LPVOID i)
{
	while(1)
	{
		Mario_Hit();
		Mario_Gravity();
		Mario_Jump();
		Mario_Fire_Attack();
		drawMap();
		Sleep(10);
		if (isGameOver|| nextStage) {
			Sleep(2000);
		}
		if (marioLife == 0) {
			return;
		}
	}
}


// �ʿ��Ѱ�?
DWORD WINAPI ScreenProcess(LPVOID i)
{
	while (1)
	{
		//drawMap();
		//Sleep(1000 / 60);
	}
}

int GetFontSize(HANDLE windowHandle, COORD* size)
{
	CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };

	if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
	{
		return 0;
	}

	*size = font.dwFontSize;

	return 1;
}

int SetFontSize(HANDLE windowHandle, COORD size)
{
	CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };

	if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
	{
		return 0;
	}

	font.dwFontSize = size;

	if (!SetCurrentConsoleFontEx(windowHandle, 0, &font))
	{
		return 0;
	}

	return 1;
}