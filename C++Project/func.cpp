#include<iostream>
#include<conio.h>
#include<windows.h>
#include "funcH.h"

//�÷� ���
#define BLACK 0 
#define BLUE 1 
#define GREEN 2 
#define CYAN 3 
#define RED 4 
#define MAGENTA 5 
#define BROWN 6 
#define LIGHTGRAY 7 
#define DARKGRAY 8 
#define LIGHTBLUE 9 
#define LIGHTGREEN 10 
#define LIGHTCYAN 11 
#define LIGHTRED 12 
#define LIGHTMAGENTA 13 
#define YELLOW 14 
#define WHITE 15

void ending_screen(int a, int b, int c) {
	cout << "\n" << endl;

	if (a == 4 && b == 50 && c == 5) {
		cout << "    �ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
		cout << "    ��                              ��" << endl;
		cout << "    ��    ȯ���� �ӷ���Ű �ϼ�!     ��" << endl;
		cout << "    ��                              ��" << endl;
		cout << "    �ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
		cout << "\n" << endl;
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
		cout << "   ��                          *                      *   ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                        *            ��" << endl;
		cout << "   ��          *                    *                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��     *                    ^                          ��" << endl;
		cout << "   ��                    (  ( �� )  )                      ��" << endl;
		cout << "   ��                 (   (   ��   )   )                   ��" << endl;
		cout << "   ��              ��___(_____��_____)___)                 ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                          *          ��" << endl;
		cout << "   ��   *                                                 ��" << endl;
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
		cout << "\n" << endl;
		cout << "    ���� �Դ� �ϳ� �׾ �� ������ ���ִ� �ӷ���Ű!" << endl << endl;
		cout << "    ����� �Ǹ��� �丮���Դϴ�!" << endl;
	}
	else if (a == 0 && b == 0 && c < 3) {
		cout << "    �ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
		cout << "    ��                              ��" << endl;
		cout << "    ��  ���� ���� ����⹰ �ϼ�!  ��" << endl;
		cout << "    ��                              ��" << endl;
		cout << "    �ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�" << endl;
		cout << "\n" << endl;
		cout << "\t       X           X" << endl;
		cout << "\t         X       X" << endl;
		cout << "\t           X   X" << endl;
		cout << "\t             X" << endl;
		cout << "\t             X" << endl;
		cout << "\t           X   X" << endl;
		cout << "\t         X       X" << endl;
		cout << "\t       X           X" << endl;
		cout << "\n" << endl;
		cout << "    �丮�� �Ϸ����� �����⸦ �����س��̳׿�!" << endl << endl;
		cout << "    �׳� �丮�� ���ϴ� ���� ���� �� �����ϴ�!" << endl << endl;
	}
	else if (a == 1 && b == 6 && c == 2) {
		cout << "    �� �Ϳ��� ���^^ �ϼ�! ��\n" << endl << endl;
		cout << "    ����� ������,,, 2001�� 6�� 2��!" << endl << endl;
		cout << "    �� ������ ���߼̳׿�^^ ���ϵ帳�ϴ�^^" << endl << endl;
	}
	else if (a == 4 && b == 0 && c < 3) {
		cout << "    �� ���� �ִ� �ӷ� ��Ű �ϼ�! ��\n" << endl << endl;
		cout << "    ��絵 ����, �ε巴���� ������..." << endl << endl;
		cout << "    ���� ����� �־ �׷��� ���ֽ��ϴ�." << endl << endl;
	}
	else if (a == 0 && b >= 50 && c < 3) {
		cout << "    �� �ε巯�� �ӷ���Ű �ϼ�! ��\n" << endl << endl;
		cout << "    ��絵 ����, ���� ��������..." << endl << endl;
		cout << "    ���� ��� �ε巴���ϴ�." << endl << endl;
	}
	else if (a == 0 && b == 0 && c == 5) {
		cout << "    �� ��縸 ���� �ӷ� ��Ű �ϼ�! ��\n" << endl << endl;
		cout << "    ��絵 ����, �ε巴���� �ʰ�..." << endl << endl;
		cout << "    �� ¥�� ��縸 ���� �ӷ� ��Ű �Դϴ�." << endl << endl;
	}
	else {
		cout << "    �� �ӷ� ��Ű �ϼ�! ��\n" << endl << endl;
		cout << "    �����ϰ� ���ִ� �ӷ� ��Ű�Դϴ�." << endl << endl;
	}

	cout << endl << endl;
	getchar();
}

void start(int& stage_num) {
	while (true) {
		cout << "\n\n\n" << endl;
		cout << "   ����������������������������������������������������������������������������������������" << endl; Sleep(100);
		cout << "   ��                                          ��" << endl; Sleep(100);
		cout << "   ��             �ӷ� ��Ű �����             ��" << endl; Sleep(100);
		cout << "   ��                                          ��" << endl; Sleep(100);
		cout << "   ����������������������������������������������������������������������������������������" << endl; Sleep(100);

		cout << "\n\n" << endl;
		cout << "         1) �����ϱ�" << endl;
		cout << "         2) ���ӹ��" << endl;
		cout << "         3) ������" << endl;
		cout << "\n";

		while (true) {

			int key = _getch();

			if (key == 49) { //1�� ������ ��
				Sleep(100);
				return;
			}
			else if (key == 50) { //2�� ������ ��
				guide(); //���̵�� �Ѿ
				break;
			}
			else if (key == 51) { //3�� ������ ��
				cout << "���� ����" << endl;
				Sleep(500);
				exit(0); //������ �����
			}
		}
	}


	system("cls");
}

void guide() {
	int page_num = 1;

	while (true) { //��� �ݺ�

		system("cls");

		cout << "\n\n\n" << endl;
		cout << "   ����������������������������������������������������������������������������������������" << endl; Sleep(100);
		cout << "   ��                                          ��" << endl; Sleep(100);
		cout << "   ��                ���� ���                 ��" << endl; Sleep(100);
		cout << "   ��                                          ��" << endl; Sleep(100);
		cout << "   ����������������������������������������������������������������������������������������" << endl; Sleep(100);
		cout << "\n\n";

		cout << "   Stage " << page_num << " ����" << endl << endl;

		switch (page_num) { //page_num�� ���� ��µǴ� ���� �޶���
		case 1:
			cout << "   �ӷ���Ű�� ����� ���ؼ� ��ᰡ �ʿ��ϴ�!" << endl << endl;
			cout << "   ��� ����Ʈ�� �ܿ���, ������� ��Ḧ ���纸��." << endl << endl;
			cout << "   ��ᰡ �ϳ��� Ʋ���� fail..�Ф�" << endl << endl;
			cout << "   �� ����ؼ� ���纸��!" << endl << endl;
			cout << "\n\t\t��  ��\n" << endl;
			break;
		case 2:
			cout << "   �ӷ���Ű�� ����� ���ؼ� ������ ����� �Ѵ�." << endl << endl;
			cout << "   �����̽�Ű�� ��Ÿ�ؼ� ������ ���ϴ� ��ŭ �����!" << endl << endl;
			cout << "   �������̽� 3�� �� => ȸ�� 1�� ������ ����." << endl << endl;
			cout << "   ���� ���� ���� ���� ��ǰ�� ��������ٰ� �ϴµ�...?" << endl << endl;
			cout << "\n\t\t��  ��\n" << endl;
			break;
		case 3:
			cout << "   �ӷ���Ű�� ����� ���ؼ� ©�ָӴϷ� ¥�� �Ѵ�." << endl << endl;
			cout << "   ����� �� �ִ� �κп� ���� �����̽��ٸ� ��������." << endl << endl;
			cout << "   ��Ȯ�� ¥�� ������ ������ ������ �ʴ´�." << endl << endl;
			cout << "   5�� �ȿ� 3���� ������Ű�� ������ ����!" << endl << endl;
			cout << "\n\t\t��  ��\n" << endl;
			break;
		}
		cout << "   (xŰ�� ������ ���ư��ϴ�)" << endl;


		while (true) {

			int key = _getch();

			if (key == (int)'x' || key == (int)'X') { //���� x�� ������
				system("cls"); //ȭ���� ���� �����ǰ�
				return; //���� ��
			}

			else if (key == 224) { //����Ű �Է�
				key = _getch();
				if (key == 75 && page_num == 2 || key == 75 && page_num == 3) { // 2, 3���������� ���� Ű�� ������ ��
					page_num--; //���� ��������
				}
				else if (key == 77 && page_num == 1 || key == 77 && page_num == 2) { // 1, 2���������� ������ Ű�� ������ ��
					page_num++; //���� ��������
				}
				else if (key == 75 && page_num == 1) { //1���������� ���� ��ư�� ������ �� ������ 3���� ��
					page_num = 3;
				}
				else { //3���������� ������ ��ư�� ������ �� ������ 1�� ��
					page_num = 1;
				}
				break;
			}
			else {
				continue;
			}
		}
	}
}

void start_count(int& stage_num) {
	system("cls");
	for (int i = 3; i >= 0; i--) {

		switch (i) { //i�� ���� ��µǴ� �̹����� �޶���
		case 0:
			cout << "\n\n\n\n" << endl;
			Sleep(300);
			cout << "          ��������������������������������������������" << endl;
			cout << "          ��                    ��" << endl;
			cout << "          ��      �������� " << stage_num << "    ��" << endl;
			cout << "          ��                    ��" << endl;
			cout << "          ��������������������������������������������" << endl;
			Sleep(600);
			system("cls");
			cout << "\n\n\n\n" << endl;
			cout << "          ��������������������������������������������" << endl;
			cout << "          ��                    ��" << endl;
			cout << "          ��     ���� ����~!    ��" << endl;
			cout << "          ��                    ��" << endl;
			cout << "          ��������������������������������������������" << endl;
			Sleep(300);
			return;
		default:
			cout << "\n\n\n\n" << endl;
			Sleep(200);
			cout << "          ��������������������������������������������" << endl;
			cout << "          ��                    ��" << endl;
			cout << "          ��          " << i << "         ��" << endl;
			cout << "          ��                    ��" << endl;
			cout << "          ��������������������������������������������" << endl;
			Sleep(200);
			system("cls");
		}
	}
	stage_num++;
}

void stage_end() {
	system("cls");
	cout << "\n\n\n\n" << endl;
	cout << "          ��������������������������������������������" << endl;
	cout << "          ��                    ��" << endl;
	cout << "          ��       ���� ��!     ��" << endl;
	cout << "          ��                    ��" << endl;
	cout << "          ��������������������������������������������" << endl;
	Sleep(800);
	system("cls");
}

void game_end() {
	system("cls");
	cout << "\n\n\n\n" << endl;
	Sleep(1000);
	cout << "          ��������������������������������������������" << endl;
	cout << "          ��                    ��" << endl;
	cout << "          ��     �ӷ� ���� ��   ��" << endl;
	cout << "          ��                    ��" << endl;
	cout << "          ��������������������������������������������" << endl;
	Sleep(1000);
	system("cls");
	cout << "\n\n\n\n" << endl;
	cout << "          ��������������������������������������������" << endl;
	cout << "          ��                    ��" << endl;
	cout << "          ��     �� �������!   ��" << endl;
	cout << "          ��                    ��" << endl;
	cout << "          ��������������������������������������������" << endl;
	Sleep(2000);
	system("cls");
}

void stage1(int& stage_score, int& stage_num) {
	bool T_or_F[4];
	int t_num = 0;
	int key;

	start_count(stage_num);
	system("cls");

	list();
	Sleep(500);
	system("cls");

	for (int i = 0; i<4; i++) {
		cout << "\n\n" << i + 1 << "��° ����?" << endl;
		if (i == 0) {
			cout << "\n\n" << endl;
			cout << "  �� 1�� ��� �븥��" << endl;
			cout << "  �� 2�� ©�ָӴ�" << endl;
			cout << "  �� 3�� ��" << endl;
			cout << "  �� 4�� ����" << endl;

			while (true) {
				key = _getch();
				if (key == 52) {
					textcolor(GREEN, BLACK);
					cout << "\n����!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nƲ��!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		else if (i == 1) {
			cout << "\n\n" << endl;
			cout << "  �� 1�� ������" << endl;
			cout << "  �� 2�� ��� ����" << endl;
			cout << "  �� 3�� ©�ָӴ�" << endl;
			cout << "  �� 4�� ��� �븥��" << endl;

			while (true) {
				key = _getch();
				if (key == 50) {
					textcolor(GREEN, BLACK);
					cout << "\n����!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nƲ��!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		else if (i == 2) {
			cout << "\n\n" << endl;
			cout << "  �� 1�� ������" << endl;
			cout << "  �� 2�� �λ���" << endl;
			cout << "  �� 3�� ������" << endl;
			cout << "  �� 4�� �ø���" << endl;

			while (true) {
				key = _getch();
				if (key == 49) {
					textcolor(GREEN, BLACK);
					cout << "\n����!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nƲ��!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		else {
			cout << "\n\n" << endl;
			cout << "  �� 1�� õ������" << endl;
			cout << "  �� 2�� �ΰ�����" << endl;
			cout << "  �� 3�� ��" << endl;
			cout << "  �� 4�� ©�ָӴ�" << endl;

			while (true) {
				key = _getch();
				if (key == 49) {
					textcolor(GREEN, BLACK);
					cout << "\n����!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nƲ��!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		textcolor(WHITE, BLACK);
		Sleep(1000);
		system("cls");
	}

	for (int j = 0; j < 4; j++) {
		if (T_or_F[j] == true) t_num++;
	}

	stage_score = t_num;
	stage_num++;
	stage_end();
}

void stage2(int& stage_score, int& stage_num) {
	int num = 0, key = 0;

	start_count(stage_num);
	system("cls");

	while (true) {

		cout << "\n\n\n(�� ������ x Ŭ��!)" << endl;

		if (num / 3 > 50) {
			textcolor(YELLOW, BLACK);
		}
		else if (num / 3 == 50) {
			textcolor(GREEN, BLACK);
		}
		else if (num / 3 >= 40) {
			textcolor(LIGHTMAGENTA, BLACK);
		}
		else if (num / 3 >= 30) {
			textcolor(RED, BLACK);
		}

		cout << "ȸ�� �� : " << num / 3 << endl;

		textcolor(WHITE, BLACK);

		blending(num % 3);


		while (true) {
			key = _getch();
			if (key == VK_SPACE) { //�����̽��ٸ� ������ blending�� �׸��� �ٲ�
				num++;
				system("cls");
				break;
			}
			else if (key == 'x' || key == 'X') { //x�� ������ ���� ���������� �Ѿ
				stage_end();
				stage_score = num / 3;
				stage_num++;
				return;
			}
		}
	}
}

void stage3(int& stage_score, int& stage_num) {
	int score = 0, side = 10, key, num = 5;
	bool s = false;

	start_count(stage_num);

	while (true) {
		cout << "\n���� Ƚ�� : " << num << endl;
		cout << "���� Ƚ�� : " << score << endl << endl;
		cout << "         ����������������������" << endl;
		gotoxy(side, 7); //�� ó�� �׸� 10,6    �� �� 50,6      ��� 29~31,6
		cout << "��";
		cout << endl << endl << endl;

		switch (side) {
		case 10: s = false; break; //���� �� ���� �ٴٸ��� s�� false�� �ٲپ���
		case 50: s = true; break; //������ �� ���� �ٴٸ��� s�� true�� �ٲپ���
		}

		if (side >= 10 || side <= 50) {
			if (s == false) side++; //���������� �̵�
			else side--; //�������� �̵�
		}

		if (_kbhit()) {
			key = _getch();
			if (key == VK_SPACE) {
				num--;
				if (side == 29 || side == 30 || side == 31) { //size�� 29~31�̸� �������� �Ǵ�
					score++;
					squeeze(true); //�ӷ��� ¥�� �� ������ �׸� ���
					textcolor(GREEN, BLACK);
					cout << "\n����!" << endl;
					textcolor(WHITE, BLACK);
					Sleep(500);
				}
			}
		}
		else {
			squeeze(false); //�ӷ��� ¥�� �� ������ �׸� ���
		}

		if (num == 0) break;

		system("cls");
	}

	stage_score = score;
	stage_end();
	game_end();
}

void blending(int num) {
	cout << "\n";

	if (num == 0) {
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��           _                                         ��" << endl;
		cout << "   ��          ����                                         ��" << endl;
		cout << "   ��          ����                                         ��" << endl;
		cout << "   ��          ����                                         ��" << endl;
		cout << "   ��          ����                                         ��" << endl;
		cout << "   ��          ����                                         ��" << endl;
		cout << "   ��          ����                                         ��" << endl;
		cout << "   ��         ��  ��                                        ��" << endl;
		cout << "   ��         ��  ��                                        ��" << endl;
		cout << "   ��     ������������������������������������������������������������������������������������      ��" << endl;
		cout << "   ��     ��                                       ��     ��" << endl;
		cout << "   ��       ��                                    ��      ��" << endl;
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
	}
	else if (num == 1) {
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                          _                          ��" << endl;
		cout << "   ��                         ����                          ��" << endl;
		cout << "   ��                         ����                          ��" << endl;
		cout << "   ��                         ����                          ��" << endl;
		cout << "   ��                         ����                          ��" << endl;
		cout << "   ��                         ����                          ��" << endl;
		cout << "   ��                         ����                          ��" << endl;
		cout << "   ��                        ��  ��                         ��" << endl;
		cout << "   ��                        ��  ��                         ��" << endl;
		cout << "   ��     ������������������������������������������������������������������������������������      ��" << endl;
		cout << "   ��     ��                                       ��     ��" << endl;
		cout << "   ��       ��                                    ��      ��" << endl;
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
	}
	else {
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                          _          ��" << endl;
		cout << "   ��                                         ����          ��" << endl;
		cout << "   ��                                         ����          ��" << endl;
		cout << "   ��                                         ����          ��" << endl;
		cout << "   ��                                         ����          ��" << endl;
		cout << "   ��                                         ����          ��" << endl;
		cout << "   ��                                         ����          ��" << endl;
		cout << "   ��                                        ��  ��         ��" << endl;
		cout << "   ��                                        ��  ��         ��" << endl;
		cout << "   ��     ������������������������������������������������������������������������������������      ��" << endl;
		cout << "   ��     ��                                       ��     ��" << endl;
		cout << "   ��       ��                                    ��      ��" << endl;
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
	}
}

void squeeze(bool ft) {
	if (ft == false) {
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
		cout << "   ��                 �����������                ��" << endl;
		cout << "   ��                   ���������                  ��" << endl;
		cout << "   ��                    ��������                   ��" << endl;
		cout << "   ��                     �������                    ��" << endl;
		cout << "   ��                      ������                     ��" << endl;
		cout << "   ��                        ����                       ��" << endl;
		cout << "   ��                        ����                       ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
	}
	else {
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
		cout << "   ��                 �����������                ��" << endl;
		cout << "   ��                   ���������                  ��" << endl;
		cout << "   ��                    ��������                   ��" << endl;
		cout << "   ��                     �������                    ��" << endl;
		cout << "   ��                      ������                     ��" << endl;
		cout << "   ��                        ����                       ��" << endl;
		cout << "   ��                        ����                       ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��                           ^                         ��" << endl;
		cout << "   ��                     (  ( �� )  )                     ��" << endl;
		cout << "   ��                  (   (   ��   )   )                  ��" << endl;
		cout << "   ��               ��___(_____��_____)___)                ��" << endl;
		cout << "   ��                                                     ��" << endl;
		cout << "   ��������������������������������������������������������������������������������������������������������������" << endl;
	}

}

void list() {
	cout << "\n\n\n" << endl;
	cout << "        ������������������������������������������������������������������" << endl;
	cout << "        ��                               ��" << endl;
	cout << "        ��                               ��" << endl;
	cout << "        ��          �ʿ��� ���          ��" << endl;
	cout << "        ��                               ��" << endl;
	cout << "        ��     1. ����                   ��" << endl;
	cout << "        ��     2. ��� ����              ��" << endl;
	cout << "        ��     3. ������                 ��" << endl;
	cout << "        ��     4. õ������               ��" << endl;
	cout << "        ��                               ��" << endl;
	cout << "        ��                               ��" << endl;
	cout << "        ������������������������������������������������������������������" << endl;
}

void textcolor(int foreground, int background) { //text ������ �ٲٰ� ���ִ� �Լ�
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y) //�ֿܼ��� ���ϴ� ���� ����ϰ� ���ִ� �Լ�

{

	COORD Pos = { (short)x - 1, (short)y - 1 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}