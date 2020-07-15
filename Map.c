#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#include "info.h"

/*===============================Variables===============================*/
char Map[HEIGHT * WIDTH];
char BackGround[HEIGHT * WIDTH];
/*===============================Functions===============================*/

void loadTextMap(char *fileName, int mapNum);
void setObjectToMap(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset);


void mapInitialize(int stage)
{

	switch ((stage-1)/10)
	{
	case 0:
		loadTextMap("Map1.txt", 1);
		break;
	case 1:
		loadTextMap("Map2.txt", 1);
		break;
	case 2:
		loadTextMap("Map1.txt", 1);
		break;
	case 3:
		loadTextMap("Map4.txt", 1);
		break;
	case 4:
		loadTextMap("Map4.txt", 1);
		break;
	default:
		loadTextMap("Map1.txt", 1);
		break;
	}

	switch (stage)
	{
	//=====================================[WORLD 1]=====================================
	case 1:
		//���⿡ ��� ����
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 168, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 38, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);

		// ������Ʈ
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 150, 110 - PIPE_TOP_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 150, 110);

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 0, HEIGHT - BRICK_HEIGHT);
		for (int i = 0; i <8; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 64 + i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		for (int i = 0; i <3; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 380 + i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;

	case 2:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}


		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);
		break;
	case 3:


		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 420, HEIGHT - BRICK_HEIGHT * 4);

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT * 4);

		break;
	case 4:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);


		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//���
		for (int i = 1; i < 3; i++)
		{
			for (int j = 0; j < i; j++) {
				setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, (i + 1) * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT - BRICK_HEIGHT * (j + 1));
			}
		}
		for (int i = 1; i < 5; i++)
		{
			for (int j = 1; j <= i; j++) {
				setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, (i + 5) * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT - BRICK_HEIGHT * j);
			}
		}

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;
	case 5:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// �ٴ�
		for (int i = 0; i < 8; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		for (int i = 12; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//��
		for (int i = 1; i < 6; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * (i + 1));
		}

		// ���
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 5);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 5);

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;


	case 6:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);


		// �ٴ�

		for (int i = 0; i < 2; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		for (int i = 12; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}



		// ���
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 5);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 5);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT * 3);

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;

	case 7:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}


		for (int i = 2; i < 12; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		}

		for (int i = 13; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		}
		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - 6 * BRICK_HEIGHT);

		break;


	case 8:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 106, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 220, 70);


		// �ٴ�
		for (int i = 0; i < 1; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 2 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		//setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 0 * BRICK_WIDTH, HEIGHT - 7 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 1 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 6 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 6 * BRICK_WIDTH, HEIGHT - 7 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 12 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 420, HEIGHT - 6 * BRICK_HEIGHT);

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - 6 * BRICK_HEIGHT);

		break;

	case 9:
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 156, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);


		for (int i = 13; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		}
		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - 6 * BRICK_HEIGHT);

		break;

	case 10:

		//���⿡ ��� ����
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 168, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 38, 10);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 360, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);

		// �ٴ�
		for (int i = 0; i < 4; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		for (int i = 11; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//���
		for (int i = 1; i < 3; i++)
		{
			for (int j = 0; j < i; j++) {
				setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, (i + 1) * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT - BRICK_HEIGHT * (j + 1));
			}
		}
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 12 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 12 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 12 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);



		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 405, HEIGHT - 5 * BRICK_HEIGHT);
		break;
	//=====================================[WORLD 2]=====================================
	case 11:

		setMarioPos(35, 10);

		// õ��
		for (int i = 0; i < 12; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH + 100, 0);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		// ������
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);


		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;
	case 12:

		// õ��
		for (int i = 0; i < 15; i++)
		{
			if (i == 4 || i == 8) continue;
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			if (i == 4 || i == 8) continue;
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 5 *  BRICK_WIDTH, 4 * BRICK_HEIGHT);

		for (int i = 0; i < 3; i++)
		{
			setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, 5 * BRICK_WIDTH + i * THORN_WIDTH, HEIGHT - THORN_HEIGHT - BRICK_HEIGHT);
		}

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;
	case 13:

		// õ��
		for (int i = 0; i < 10; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 2 * BRICK_HEIGHT);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 12 * BRICK_WIDTH, 5 * BRICK_HEIGHT);


		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 0, 16);

		break;

	case 14:

		setMarioPos(0, HEIGHT - 2 * BRICK_HEIGHT);

		// õ��
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			if ((i+1) % 2 == 0) continue;
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}


		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 445, HEIGHT - 16 - BRICK_HEIGHT);

		break;
	case 15:

		setMarioPos(0, HEIGHT - 2 * BRICK_HEIGHT);

		// õ��
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
		}

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 1 * BRICK_HEIGHT);
		}

		// �ٴ�
		for (int i = 0; i < 13; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT - 8);
		}

		// �ٴ�
		for (int i = 0; i < 12; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH + i * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		}
		
		//setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, 450, HEIGHT - 16 - 1 * THORN_HEIGHT);
		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 0, HEIGHT - 16 - 3 * BRICK_HEIGHT- 8);

		break;
	//=====================================[WORLD 3]=====================================
	case 21:
		//��� ����
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 168, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 38, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 380, 20);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 400, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);


		// ������
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 70, 110 - 2 * PIPE_BODY_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 70, 110 - PIPE_BODY_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 70, 110);

		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 250, 110 - 2 * PIPE_BODY_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 250, 110 - PIPE_BODY_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 250, 110);


		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 0, HEIGHT - BRICK_HEIGHT);
		for (int i = 0; i < 13; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 64 + i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		// ������ �ڽ�



		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);

		break;

	case 22:
		//���⿡ ��� ����
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 168, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 38, 20);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 390, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);

		// �ٴ�
		for (int i = 1; i < 10; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);


		for (int i = 12; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		// �ٴ�
		for (int i = 0; i < 2; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		}

		// �ٴ�
		for (int i = 11; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		}
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 12 * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);


		//������

		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 200, 108 - 2 * PIPE_BODY_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 200, 108 - PIPE_BODY_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 200, 108);

		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);
		break;
	case 23:
		//��� ����
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 168, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 38, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 380, 20);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 60, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 400, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(SMALL_BUSH), SMALL_BUSH_WIDTH, SMALL_BUSH_HEIGHT, 260, HEIGHT - SMALL_BUSH_HEIGHT - BRICK_HEIGHT);

		// �ٴ�
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		for (int i = 0; i < 3; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		}

		for (int i = 0; i < 2; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		}

		for (int i = 12; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		}

		for (int i = 13; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		}

		// ������ �ڽ� �߰� �ϴ� BRICK_BLUE

		for (int i = 4; i < 11; i++)
		{
			if (i == 6 || i == 8)
				setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
			else
				setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		}
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);


		for (int i = 4; i < 11; i++)
		{
			if (i == 5 || i == 9)
				setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 7 * BRICK_HEIGHT - 2);
			else
				setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i* BRICK_WIDTH, HEIGHT - 7 * BRICK_HEIGHT - 2);
		}
		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 8 * BRICK_HEIGHT - 2);


		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 250, HEIGHT - 8 * BRICK_HEIGHT);
		break;

	case 24:
		//���� �Ѹ��� ��
		// ���⿡ ���
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 320, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 106, 10);
		setObjectToMap(getBackGroundObject(SMALL_CLOUD), SMALL_CLOUD_WIDTH, SMALL_CLOUD_HEIGHT, 220, 70);


		// �ٴ�
		for (int i = 0; i < 2; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 13 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);


		for (int i = 4; i < 9; i++)
		{

			if (i == 4 || i == 7)
				setObjectToMap(getBackGroundObject(BRICK_BLUE), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
			else
				setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		}

		setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);



		// ��
		setObjectToMap(getBackGroundObject(DOOR), 32, 16, 7 * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);

		break;

	case 25:

		// �ٴ�
		for (int i = 0; i < 1; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}


		for (int i = 10; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//������

		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 2 * BRICK_WIDTH, HEIGHT - 1 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 2 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 2 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - 1 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);



		for (int i = 0; i < 15; i++)
		{
			if (i >= 4 && i <= 6)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
		}


		setObjectToMap(getBackGroundObject(CASTLE), CASTLE_WIDTH, CASTLE_HEIGHT, 380, HEIGHT - 4 * BRICK_HEIGHT);

		

		//�����߰�

		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 412, HEIGHT - 2 * BRICK_HEIGHT);
		break;



	//=====================================[WORLD 4]=====================================
	case 31:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i >= 4 && i <= 6 || i >= 8 && i <= 10)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			//�����۹ڽ� �߰�
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
			if (i == 0 || i == 1)
				for (int j = 1; j < 4; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - j * BRICK_HEIGHT);
			if (i == 2)
				for (int j = 1; j < 3; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - j * BRICK_HEIGHT);
		}
		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);
		break;

	case 32:

		setMarioPos(0, 80);
		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i == 3)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			if (i >= 13)
				continue;
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 1 * BRICK_WIDTH, 4 * BRICK_HEIGHT);

		//������
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 5 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);

		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);

		// �Ųٷε��ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITEREVERSE), 32, 16, 430, BRICK_HEIGHT);
		break;


	case 33:


		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i >= 3 && i <= 11 && i != 7)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT - 1);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 5 * BRICK_HEIGHT);
				continue;
			}
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		//�ź��� �߰�

		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 420, HEIGHT - 16 - BRICK_HEIGHT);
		break;

	case 34:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i == 4)
			{
				for (int j = 4; j < 15; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, j * BRICK_WIDTH, 5 * BRICK_HEIGHT);
			}
			if (i == 5)
			{
				for (int j = 5; j < 15; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, j * BRICK_WIDTH, 4 * BRICK_HEIGHT);
			}
			if (i == 6)
			{
				for (int j = 6; j < 15; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, j * BRICK_WIDTH, 3 * BRICK_HEIGHT);
			}
			if (i == 14)
				continue;
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}

		//�����߰�

		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 440, 2 * BRICK_HEIGHT);
		break;

	case 35:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			if (i == 13)
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 4 * BRICK_HEIGHT);
			if (i == 3 || i == 4 || i == 6 || i == 7 || i == 13)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
			if (i >= 0 && i <= 2)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 3 * BRICK_HEIGHT);
				if (i == 2)
					continue;
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
			}
			if (i == 5)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
			}
			if (i == 8)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
			}
			if (i == 9)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 3 * BRICK_HEIGHT);
			}
			if (i >= 10 && i <= 11)
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 3 * BRICK_HEIGHT);
			if (i == 13)
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 4 * BRICK_HEIGHT);
			if (i == 14)
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);

		}
		setObjectToMap(getBackGroundObject(BARRIER), 4, 4, 13 * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT - 4);
		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 20 + 10 * BRICK_WIDTH, 2 * BRICK_HEIGHT);
		break;

	case 36:


		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 0);
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);

			if (i >= 0 && i <= 2 || i >= 6 && i <= 9 || i >= 13 && i <= 14)
			{
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 2 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 3 * BRICK_HEIGHT);
				if (i >= 0 && i <= 2)
					continue;
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 4 * BRICK_HEIGHT);
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 5 * BRICK_HEIGHT);
			}
		}
		//�ź��� 3�����߰�

		// �ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITE), 32, 16, 435, HEIGHT - 16 - BRICK_HEIGHT);
		break;
	case 37:

		setMarioPos(0, 80);
		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
		{
			if (i == 4 || i == 8)
				for (int j = 1; j <= 6; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - j * BRICK_HEIGHT);
			if (i >= 5 && i <= 7)
				setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
			if (i == 11)
				for (int j = 5; j <= 7; j++)
					setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - j * BRICK_HEIGHT);
			if (i >= 5 && i <= 7)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 1 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 12 * BRICK_WIDTH, HEIGHT - 8 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 13 * BRICK_WIDTH, HEIGHT - 8 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 14 * BRICK_WIDTH, HEIGHT - 8 * BRICK_HEIGHT);

		//��
		setObjectToMap(getBackGroundObject(BARRIER), 4, 4, 4 * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT - 4);
		setObjectToMap(getBackGroundObject(BARRIER), 4, 4, 10 * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT - 4);

		//������
		setObjectToMap(getBackGroundObject(PIPE_BODY), PIPE_BODY_WIDTH, PIPE_BODY_HEIGHT, 13 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(PIPE_TOP), PIPE_TOP_WIDTH, PIPE_TOP_HEIGHT, 13 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);

		// �Ųٷε��ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITEREVERSE), 32, 16, 430, HEIGHT - 7 * BRICK_HEIGHT);
		break;


	case 38:

		for (int i = 0; i < 15; i++)
		{
			if (i >= 4 && i <= 8 && i != 6)
			{
				setObjectToMap(getBackGroundObject(THORN), THORN_WIDTH, THORN_HEIGHT, i * THORN_WIDTH, HEIGHT - THORN_HEIGHT);
				continue;
			}
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		}
		for (int i = 12; i <= 14; i++)
		{
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		}
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 10 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		for (int i = 2; i <= 9; i++)
		{
			if (i == 4 || i == 6 || i == 8)
				continue;
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 6 * BRICK_HEIGHT);
		}
		for (int i = 0; i <= 1; i++)
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - 7 * BRICK_HEIGHT);
		//�ź��� �θ���

		//������-������
		setObjectToMap(getBackGroundObject(DOORBOSS), 64, 16, 0, HEIGHT - 8 * BRICK_HEIGHT);
		//��
		setObjectToMap(getBackGroundObject(BARRIER), 4, 4, 12 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT - 4);
		break;
	case 39:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 2 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 3 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 3 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 4 * BRICK_WIDTH, HEIGHT - 4 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 7 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 9 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 11 * BRICK_WIDTH, HEIGHT - 5 * BRICK_HEIGHT);
		for (int i = 0; i < 4; i++)
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, 2 * BRICK_HEIGHT);
		// ���� ���̴� ��ġ
		//setObjectToMap(getBackGroundObject(HAMMER), 32, 16, 435, HEIGHT - 16 - BRICK_HEIGHT);
		//setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, 13 * BRICK_WIDTH, HEIGHT - 2 * BRICK_HEIGHT);
		// �Ųٷε��ϾṮ
		setObjectToMap(getBackGroundObject(DOORWHITEREVERSE), 32, 16, 10, 0);

		break;
	case 41:

		// �ٴ�-ȸ������,����
		for (int i = 0; i < 15; i++)
			setObjectToMap(getBackGroundObject(BRICK_GRAY), BRICK_WIDTH, BRICK_HEIGHT, i * BRICK_WIDTH, HEIGHT - BRICK_HEIGHT);

		//���ֺҷ�����
		setObjectToMap(getBackGroundObject(PRINCESS), PRINCESS_WIDTH, PRINCESS_HEIGHT, 8 * BRICK_WIDTH, HEIGHT - 3*BRICK_HEIGHT);

		break;
	default:
		break;
	}







	//��� ���� �����صα�
	memcpy(BackGround, Map, HEIGHT * WIDTH * sizeof(char));
}

void loadTextMap(char *fileName, int mapNum)
{
	char tmp;
	int k = 0;
	FILE *fp = fopen(fileName, "r");

	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH + 1; x++)
		{
			fscanf(fp, "%c", &tmp);
			if (tmp >= '0' && tmp <= '9')
				Map[x + WIDTH * y] = tmp;
		}
	}
	fclose(fp);
}

char getMapPixel(int x, int y) {
	return Map[x + WIDTH * y];
}

void setMapPixel(int x, int y, char p)
{
	Map[x + WIDTH * y] = p;
}


void setObjectToMap(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			tmp = img[x + imageWidth * y];
			if (tmp == '0') {
				continue;		// 0 �̸� �������� �ٲ��� ����(��ĭǥ��)
			}
			Map[(x + xoffset) + WIDTH * (y + yoffset)] = tmp;
		}
	}

}

void deleteObjectFromMap(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset) {
	char tmp;

	for (int y = 0; y < imageHeight; ++y)
	{
		for (int x = 0; x < imageWidth; ++x)
		{
			tmp = img[x + imageWidth * y];

			// ��ġ�ºκ� ó��.. ������ �׸������� �������� �ܻ��� ����

			//if (tmp == '0') {
			//	continue;
			//}

			Map[(x + xoffset) + WIDTH * (y + yoffset)] = BackGround[(x + xoffset) + WIDTH * (y + yoffset)];
		}
	}
}

extern int isGameOver;
int detectCollisionMap(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			tmp = img[x + imageWidth * y];
			// ���� ���� ���..
			if (tmp == '0')
				continue;
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '1')	// 1�� ��������
				return YES;
		}
	}
	return NO;
}

// MARIO
int detectCollisionObject(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			//if (img[x + imageWidth * y] == '0') continue;	//���� �и�������� �ּ�Ǯ�� (���ٴ� detect �ϴµ� ��Ǯ, '9' �� detect ����)

			// '9' �� �ٴ�(��������)
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '9') return 1;

			// A~P�� NPC 
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] >= 'A' && Map[(x + xoffset) + WIDTH * (y + yoffset)] <= 'P') return 1;

			// '8' �� ��
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '8') return 2;	//��������

			// 'W' �� �ϾṮ
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == 'W') return 2;	//��������

			// '7'�� �����׵θ�
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '7') return 3;	//���� ȹ��

			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == 'T') return 5;	//����Ŭ����
		}
	}
	return 0;
}

int EnemyDetectCollisionObject(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '9') return 1;

			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == 'X' || (Map[(x + xoffset) + WIDTH * (y + yoffset)] == 'Y') || (Map[(x + xoffset) + WIDTH * (y + yoffset)] == 'Z'))
				return 2;

			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == '!')
				return 3;
		}
	}
	return NO;
}

int ItemDetectCollisionObject(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			// �������� ������(X,Y,Z)�� �浹�Ѱ�� Ž��
			if (Map[(x + xoffset) + WIDTH * (y + yoffset)] == 'X' || Map[(x + xoffset) + WIDTH * (y + yoffset)] == 'Y' || Map[(x + xoffset) + WIDTH * (y + yoffset)] == 'Z') {
				return YES;
			}

		}
	}
	return NO;
}



void drawMap()	// should be replaced with camera
{
	setConsoleBuffer(Map, WIDTH, HEIGHT, 0, 0);
}