#include<iostream>
#include<conio.h>
#include<windows.h>
#include "funcH.h"

//ÄÃ·¯ »ó¼ö
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
		cout << "    ¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú" << endl;
		cout << "    ¡Ú                              ¡Ú" << endl;
		cout << "    ¡Ú    È¯»óÀÇ ¸Ó·©ÄíÅ° ¿Ï¼º!     ¡Ú" << endl;
		cout << "    ¡Ú                              ¡Ú" << endl;
		cout << "    ¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú" << endl;
		cout << "\n" << endl;
		cout << "   ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
		cout << "   ¦¢                          *                      *   ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                        *            ¦¢" << endl;
		cout << "   ¦¢          *                    *                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢     *                    ^                          ¦¢" << endl;
		cout << "   ¦¢                    (  ( ¦¢ )  )                      ¦¢" << endl;
		cout << "   ¦¢                 (   (   ¦¢   )   )                   ¦¢" << endl;
		cout << "   ¦¢              £¨___(_____¦¢_____)___)                 ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                          *          ¦¢" << endl;
		cout << "   ¦¢   *                                                 ¦¢" << endl;
		cout << "   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
		cout << "\n" << endl;
		cout << "    µÑÀÌ ¸Ô´Ù ÇÏ³ª Á×¾îµµ ¸ð¸¦ Á¤µµ·Î ¸ÀÀÖ´Â ¸Ó·©ÄíÅ°!" << endl << endl;
		cout << "    ´ç½ÅÀº ÈÇ¸¢ÇÑ ¿ä¸®»çÀÔ´Ï´Ù!" << endl;
	}
	else if (a == 0 && b == 0 && c < 3) {
		cout << "    ¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú" << endl;
		cout << "    ¡Ú                              ¡Ú" << endl;
		cout << "    ¡Ú  Àç»ç¿ë ±ÝÁö ÇÙÆó±â¹° ¿Ï¼º!  ¡Ú" << endl;
		cout << "    ¡Ú                              ¡Ú" << endl;
		cout << "    ¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú" << endl;
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
		cout << "    ¿ä¸®¸¦ ÇÏ·¨´õ´Ï ¾²·¹±â¸¦ »ý¼ºÇØ³»¼Ì³×¿ä!" << endl << endl;
		cout << "    ±×³É ¿ä¸®¸¦ ¾ÈÇÏ´Â ÆíÀÌ ÁÁÀ» °Í °°½À´Ï´Ù!" << endl << endl;
	}
	else if (a == 1 && b == 6 && c == 2) {
		cout << "    ¢º ±Í¿©¿î Èñ¼ö^^ ¿Ï¼º! ¢¸\n" << endl << endl;
		cout << "    Èñ¼öÀÇ »ýÀÏÀº,,, 2001³â 6¿ù 2ÀÏ!" << endl << endl;
		cout << "    Á¦ »ýÀÏÀ» ¸ÂÃß¼Ì³×¿ä^^ ÃàÇÏµå¸³´Ï´Ù^^" << endl << endl;
	}
	else if (a == 4 && b == 0 && c < 3) {
		cout << "    ¢º ¸À¸¸ ÀÖ´Â ¸Ó·© ÄíÅ° ¿Ï¼º! ¢¸\n" << endl << endl;
		cout << "    ¸ð¾çµµ º°·Î, ºÎµå·´Áöµµ ¾ÊÁö¸¸..." << endl << endl;
		cout << "    Àç·á´Â Á¦´ë·Î ³Ö¾î¼­ ±×·±Áö ¸ÀÀÖ½À´Ï´Ù." << endl << endl;
	}
	else if (a == 0 && b >= 50 && c < 3) {
		cout << "    ¢º ºÎµå·¯¿î ¸Ó·©ÄíÅ° ¿Ï¼º! ¢¸\n" << endl << endl;
		cout << "    ¸ð¾çµµ º°·Î, ¸Àµµ º°·ÎÁö¸¸..." << endl << endl;
		cout << "    ¸¹ÀÌ ¼¯¾î¼­ ºÎµå·´½À´Ï´Ù." << endl << endl;
	}
	else if (a == 0 && b == 0 && c == 5) {
		cout << "    ¢º ¸ð¾ç¸¸ ¿¹»Û ¸Ó·© ÄíÅ° ¿Ï¼º! ¢¸\n" << endl << endl;
		cout << "    ¸ð¾çµµ º°·Î, ºÎµå·´Áöµµ ¾Ê°í..." << endl << endl;
		cout << "    Àß Â¥¼­ ¸ð¾ç¸¸ ¿¹»Û ¸Ó·© ÄíÅ° ÀÔ´Ï´Ù." << endl << endl;
	}
	else {
		cout << "    ¢º ¸Ó·© ÄíÅ° ¿Ï¼º! ¢¸\n" << endl << endl;
		cout << "    ¹«³­ÇÏ°Ô ¸ÀÀÖ´Â ¸Ó·© ÄíÅ°ÀÔ´Ï´Ù." << endl << endl;
	}

	cout << endl << endl;
	getchar();
}

void start(int& stage_num) {
	while (true) {
		cout << "\n\n\n" << endl;
		cout << "   ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl; Sleep(100);
		cout << "   ¦¢                                          ¦¢" << endl; Sleep(100);
		cout << "   ¦¢             ¸Ó·© ÄíÅ° ¸¸µé±â             ¦¢" << endl; Sleep(100);
		cout << "   ¦¢                                          ¦¢" << endl; Sleep(100);
		cout << "   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl; Sleep(100);

		cout << "\n\n" << endl;
		cout << "         1) ½ÃÀÛÇÏ±â" << endl;
		cout << "         2) °ÔÀÓ¹æ¹ý" << endl;
		cout << "         3) ³¡³»±â" << endl;
		cout << "\n";

		while (true) {

			int key = _getch();

			if (key == 49) { //1À» ´­·¶À» ¶§
				Sleep(100);
				return;
			}
			else if (key == 50) { //2¸¦ ´­·¶À» ¶§
				guide(); //°¡ÀÌµå·Î ³Ñ¾î°¨
				break;
			}
			else if (key == 51) { //3À» ´­·¶À» ¶§
				cout << "°ÔÀÓ Á¾·á" << endl;
				Sleep(500);
				exit(0); //°ÔÀÓÀÌ Á¾·áµÊ
			}
		}
	}


	system("cls");
}

void guide() {
	int page_num = 1;

	while (true) { //°è¼Ó ¹Ýº¹

		system("cls");

		cout << "\n\n\n" << endl;
		cout << "   ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl; Sleep(100);
		cout << "   ¦¢                                          ¦¢" << endl; Sleep(100);
		cout << "   ¦¢                °ÔÀÓ ¹æ¹ý                 ¦¢" << endl; Sleep(100);
		cout << "   ¦¢                                          ¦¢" << endl; Sleep(100);
		cout << "   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl; Sleep(100);
		cout << "\n\n";

		cout << "   Stage " << page_num << " ¼³¸í" << endl << endl;

		switch (page_num) { //page_num¿¡ µû¶ó Ãâ·ÂµÇ´Â °ÍÀÌ ´Þ¶óÁü
		case 1:
			cout << "   ¸Ó·©ÄíÅ°¸¦ ¸¸µé±â À§ÇØ¼­ Àç·á°¡ ÇÊ¿äÇÏ´Ù!" << endl << endl;
			cout << "   Àç·á ¸®½ºÆ®¸¦ ¿Ü¿ö¼­, ¼ø¼­´ë·Î Àç·á¸¦ ¸ÂÃçº¸ÀÚ." << endl << endl;
			cout << "   Àç·á°¡ ÇÏ³ª¶óµµ Æ²¸®¸é fail..¤Ð¤Ð" << endl << endl;
			cout << "   Àß ±â¾ïÇØ¼­ ¸ÂÃçº¸ÀÚ!" << endl << endl;
			cout << "\n\t\t¢·  ¢º\n" << endl;
			break;
		case 2:
			cout << "   ¸Ó·©ÄíÅ°¸¦ ¸¸µé±â À§ÇØ¼­ ¹ÝÁ×À» ¼¯¾î¾ß ÇÑ´Ù." << endl << endl;
			cout << "   ½ºÆäÀÌ½ºÅ°¸¦ ¿¬Å¸ÇØ¼­ ¹ÝÁ×À» ¿øÇÏ´Â ¸¸Å­ ¼¯¾îº¸ÀÚ!" << endl << endl;
			cout << "   ¡¸½ºÆäÀÌ½º 3¹ø ´ç => È¸Àü 1¹ø ¡¹À¸·Î º»´Ù." << endl << endl;
			cout << "   ¸¹ÀÌ ¼¯À» ¼ö·Ï ¸ÚÁø ÀÛÇ°ÀÌ ¸¸µé¾îÁø´Ù°í ÇÏ´Âµ¥...?" << endl << endl;
			cout << "\n\t\t¢¸  ¢º\n" << endl;
			break;
		case 3:
			cout << "   ¸Ó·©ÄíÅ°¸¦ ¸¸µé±â À§ÇØ¼­ Â©ÁÖ¸Ó´Ï·Î Â¥¾ß ÇÑ´Ù." << endl << endl;
			cout << "   ¸·´ë±â »ö ÀÖ´Â ºÎºÐ¿¡ ¸ÂÃç ½ºÆäÀÌ½º¹Ù¸¦ ´­·¯º¸ÀÚ." << endl << endl;
			cout << "   Á¤È®È÷ Â¥Áö ¾ÊÀ¸¸é °¹¼ö·Î ÃÄÁÖÁö ¾Ê´Â´Ù." << endl << endl;
			cout << "   5¹ø ¾È¿¡ 3¹øÀ» ¼º°ø½ÃÅ°Áö ¾ÊÀ¸¸é ½ÇÆÐ!" << endl << endl;
			cout << "\n\t\t¢¸  ¢¹\n" << endl;
			break;
		}
		cout << "   (xÅ°¸¦ ´©¸£¸é µ¹¾Æ°©´Ï´Ù)" << endl;


		while (true) {

			int key = _getch();

			if (key == (int)'x' || key == (int)'X') { //¸¸¾à x¸¦ ´©¸£¸é
				system("cls"); //È­¸éÀÌ ÀüºÎ »èÁ¦µÇ°í
				return; //¸®ÅÏ µÊ
			}

			else if (key == 224) { //¹æÇâÅ° ÀÔ·Â
				key = _getch();
				if (key == 75 && page_num == 2 || key == 75 && page_num == 3) { // 2, 3ÆäÀÌÁö¿¡¼­ ¿ÞÂÊ Å°¸¦ ´­·¶À» ¶§
					page_num--; //ÀÌÀü ÆäÀÌÁö·Î
				}
				else if (key == 77 && page_num == 1 || key == 77 && page_num == 2) { // 1, 2ÆäÀÌÁö¿¡¼­ ¿À¸¥ÂÊ Å°¸¦ ´­·¶À» ¶§
					page_num++; //´ÙÀ½ ÆäÀÌÁö·Î
				}
				else if (key == 75 && page_num == 1) { //1ÆäÀÌÁö¿¡¼­ ¿ÞÂÊ ¹öÆ°À» ´­·¶À» ¶§ ÆäÀÌÁö 3À¸·Î °¨
					page_num = 3;
				}
				else { //3ÆäÀÌÁö¿¡¼­ ¿À¸¥ÂÊ ¹öÆ°À» ´­·¶À» ¶§ ÆäÀÌÁö 1·Î °¨
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

		switch (i) { //i¿¡ µû¶ó Ãâ·ÂµÇ´Â ÀÌ¹ÌÁö°¡ ´Þ¶óÁü
		case 0:
			cout << "\n\n\n\n" << endl;
			Sleep(300);
			cout << "          ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
			cout << "          ¦¢                    ¦¢" << endl;
			cout << "          ¦¢      ½ºÅ×ÀÌÁö " << stage_num << "    ¦¢" << endl;
			cout << "          ¦¢                    ¦¢" << endl;
			cout << "          ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
			Sleep(600);
			system("cls");
			cout << "\n\n\n\n" << endl;
			cout << "          ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
			cout << "          ¦¢                    ¦¢" << endl;
			cout << "          ¦¢     °ÔÀÓ ½ÃÀÛ~!    ¦¢" << endl;
			cout << "          ¦¢                    ¦¢" << endl;
			cout << "          ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
			Sleep(300);
			return;
		default:
			cout << "\n\n\n\n" << endl;
			Sleep(200);
			cout << "          ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
			cout << "          ¦¢                    ¦¢" << endl;
			cout << "          ¦¢          " << i << "         ¦¢" << endl;
			cout << "          ¦¢                    ¦¢" << endl;
			cout << "          ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
			Sleep(200);
			system("cls");
		}
	}
	stage_num++;
}

void stage_end() {
	system("cls");
	cout << "\n\n\n\n" << endl;
	cout << "          ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "          ¦¢                    ¦¢" << endl;
	cout << "          ¦¢       °ÔÀÓ ³¡!     ¦¢" << endl;
	cout << "          ¦¢                    ¦¢" << endl;
	cout << "          ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(800);
	system("cls");
}

void game_end() {
	system("cls");
	cout << "\n\n\n\n" << endl;
	Sleep(1000);
	cout << "          ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "          ¦¢                    ¦¢" << endl;
	cout << "          ¦¢     ¸Ó·© ±Á´Â Áß   ¦¢" << endl;
	cout << "          ¦¢                    ¦¢" << endl;
	cout << "          ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(1000);
	system("cls");
	cout << "\n\n\n\n" << endl;
	cout << "          ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "          ¦¢                    ¦¢" << endl;
	cout << "          ¦¢     ´Ù ±¸¿ü¾î¿ä!   ¦¢" << endl;
	cout << "          ¦¢                    ¦¢" << endl;
	cout << "          ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
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
		cout << "\n\n" << i + 1 << "¹øÂ° Àç·á´Â?" << endl;
		if (i == 0) {
			cout << "\n\n" << endl;
			cout << "  ¢º 1¹ø °è¶õ ³ë¸¥ÀÚ" << endl;
			cout << "  ¢º 2¹ø Â©ÁÖ¸Ó´Ï" << endl;
			cout << "  ¢º 3¹ø º¼" << endl;
			cout << "  ¢º 4¹ø ¼³ÅÁ" << endl;

			while (true) {
				key = _getch();
				if (key == 52) {
					textcolor(GREEN, BLACK);
					cout << "\nÁ¤´ä!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nÆ²¸²!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		else if (i == 1) {
			cout << "\n\n" << endl;
			cout << "  ¢º 1¹ø ·¹¸óÁó" << endl;
			cout << "  ¢º 2¹ø °è¶õ ÈòÀÚ" << endl;
			cout << "  ¢º 3¹ø Â©ÁÖ¸Ó´Ï" << endl;
			cout << "  ¢º 4¹ø °è¶õ ³ë¸¥ÀÚ" << endl;

			while (true) {
				key = _getch();
				if (key == 50) {
					textcolor(GREEN, BLACK);
					cout << "\nÁ¤´ä!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nÆ²¸²!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		else if (i == 2) {
			cout << "\n\n" << endl;
			cout << "  ¢º 1¹ø ·¹¸óÁó" << endl;
			cout << "  ¢º 2¹ø ÀÎ»ïÁó" << endl;
			cout << "  ¢º 3¹ø ¶óÀÓÁó" << endl;
			cout << "  ¢º 4¹ø ¿Ã¸®ºê" << endl;

			while (true) {
				key = _getch();
				if (key == 49) {
					textcolor(GREEN, BLACK);
					cout << "\nÁ¤´ä!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nÆ²¸²!" << endl;
					T_or_F[i] = false;
				}
				break;
			}
		}
		else {
			cout << "\n\n" << endl;
			cout << "  ¢º 1¹ø Ãµ¿¬»ö¼Ò" << endl;
			cout << "  ¢º 2¹ø ÀÎ°ø»ö¼Ò" << endl;
			cout << "  ¢º 3¹ø º¼" << endl;
			cout << "  ¢º 4¹ø Â©ÁÖ¸Ó´Ï" << endl;

			while (true) {
				key = _getch();
				if (key == 49) {
					textcolor(GREEN, BLACK);
					cout << "\nÁ¤´ä!" << endl;
					T_or_F[i] = true;
				}
				else if (key == 0) continue;
				else {
					textcolor(RED, BLACK);
					cout << "\nÆ²¸²!" << endl;
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

		cout << "\n\n\n(´Ù ÇßÀ¸¸é x Å¬¸¯!)" << endl;

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

		cout << "È¸Àü ¼ö : " << num / 3 << endl;

		textcolor(WHITE, BLACK);

		blending(num % 3);


		while (true) {
			key = _getch();
			if (key == VK_SPACE) { //½ºÆäÀÌ½º¹Ù¸¦ ´©¸£¸é blendingÀÇ ±×¸²ÀÌ ¹Ù²ñ
				num++;
				system("cls");
				break;
			}
			else if (key == 'x' || key == 'X') { //x¸¦ ´©¸£¸é ´ÙÀ½ ½ºÅ×ÀÌÁö·Î ³Ñ¾î°¨
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
		cout << "\n³²Àº È½¼ö : " << num << endl;
		cout << "¼º°ø È½¼ö : " << score << endl << endl;
		cout << "         ¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡á¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à" << endl;
		gotoxy(side, 7); //¸Ç Ã³À½ ³×¸ð 10,6    ¸Ç ³¡ 50,6      °¡¿îµ¥ 29~31,6
		cout << "¡ã";
		cout << endl << endl << endl;

		switch (side) {
		case 10: s = false; break; //¿ÞÂÊ ¸Ç ³¡¿¡ ´Ù´Ù¸£¸é s¸¦ false·Î ¹Ù²Ù¾îÁÜ
		case 50: s = true; break; //¿À¸¥ÂÊ ¸Ç ³¡¿¡ ´Ù´Ù¸£¸é s¸¦ true·Î ¹Ù²Ù¾îÁÜ
		}

		if (side >= 10 || side <= 50) {
			if (s == false) side++; //¿À¸¥ÂÊÀ¸·Î ÀÌµ¿
			else side--; //¿ÞÂÊÀ¸·Î ÀÌµ¿
		}

		if (_kbhit()) {
			key = _getch();
			if (key == VK_SPACE) {
				num--;
				if (side == 29 || side == 30 || side == 31) { //size°¡ 29~31ÀÌ¸é ¼º°øÀ¸·Î ÆÇ´Ü
					score++;
					squeeze(true); //¸Ó·©À» Â¥´Â µ¥ ¼º°øÇÑ ±×¸² Ãâ·Â
					textcolor(GREEN, BLACK);
					cout << "\n¼º°ø!" << endl;
					textcolor(WHITE, BLACK);
					Sleep(500);
				}
			}
		}
		else {
			squeeze(false); //¸Ó·©À» Â¥´Â µ¥ ½ÇÆÐÇÑ ±×¸² Ãâ·Â
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
		cout << "   ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢           _                                         ¦¢" << endl;
		cout << "   ¦¢          ¦¢¦¢                                         ¦¢" << endl;
		cout << "   ¦¢          ¦¢¦¢                                         ¦¢" << endl;
		cout << "   ¦¢          ¦¢¦¢                                         ¦¢" << endl;
		cout << "   ¦¢          ¦¢¦¢                                         ¦¢" << endl;
		cout << "   ¦¢          ¦¢¦¢                                         ¦¢" << endl;
		cout << "   ¦¢          ¦¢¦¢                                         ¦¢" << endl;
		cout << "   ¦¢         ¦£  ¦¤                                        ¦¢" << endl;
		cout << "   ¦¢         ¦¢  ¦¢                                        ¦¢" << endl;
		cout << "   ¦¢     ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡      ¦¢" << endl;
		cout << "   ¦¢     ¡¬                                       £¯     ¦¢" << endl;
		cout << "   ¦¢       ¡¬                                    £¯      ¦¢" << endl;
		cout << "   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	}
	else if (num == 1) {
		cout << "   ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                          _                          ¦¢" << endl;
		cout << "   ¦¢                         ¦¢¦¢                          ¦¢" << endl;
		cout << "   ¦¢                         ¦¢¦¢                          ¦¢" << endl;
		cout << "   ¦¢                         ¦¢¦¢                          ¦¢" << endl;
		cout << "   ¦¢                         ¦¢¦¢                          ¦¢" << endl;
		cout << "   ¦¢                         ¦¢¦¢                          ¦¢" << endl;
		cout << "   ¦¢                         ¦¢¦¢                          ¦¢" << endl;
		cout << "   ¦¢                        ¦£  ¦¤                         ¦¢" << endl;
		cout << "   ¦¢                        ¦¢  ¦¢                         ¦¢" << endl;
		cout << "   ¦¢     ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡      ¦¢" << endl;
		cout << "   ¦¢     ¡¬                                       £¯     ¦¢" << endl;
		cout << "   ¦¢       ¡¬                                    £¯      ¦¢" << endl;
		cout << "   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	}
	else {
		cout << "   ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                          _          ¦¢" << endl;
		cout << "   ¦¢                                         ¦¢¦¢          ¦¢" << endl;
		cout << "   ¦¢                                         ¦¢¦¢          ¦¢" << endl;
		cout << "   ¦¢                                         ¦¢¦¢          ¦¢" << endl;
		cout << "   ¦¢                                         ¦¢¦¢          ¦¢" << endl;
		cout << "   ¦¢                                         ¦¢¦¢          ¦¢" << endl;
		cout << "   ¦¢                                         ¦¢¦¢          ¦¢" << endl;
		cout << "   ¦¢                                        ¦£  ¦¤         ¦¢" << endl;
		cout << "   ¦¢                                        ¦¢  ¦¢         ¦¢" << endl;
		cout << "   ¦¢     ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡      ¦¢" << endl;
		cout << "   ¦¢     ¡¬                                       £¯     ¦¢" << endl;
		cout << "   ¦¢       ¡¬                                    £¯      ¦¢" << endl;
		cout << "   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	}
}

void squeeze(bool ft) {
	if (ft == false) {
		cout << "   ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
		cout << "   ¦¢                 ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á                ¦¢" << endl;
		cout << "   ¦¢                   ¡á¡á¡á¡á¡á¡á¡á¡á                  ¦¢" << endl;
		cout << "   ¦¢                    ¡á¡á¡á¡á¡á¡á¡á                   ¦¢" << endl;
		cout << "   ¦¢                     ¡á¡á¡á¡á¡á¡á                    ¦¢" << endl;
		cout << "   ¦¢                      ¡á¡á¡á¡á¡á                     ¦¢" << endl;
		cout << "   ¦¢                        ¡à¡à¡à                       ¦¢" << endl;
		cout << "   ¦¢                        ¡à¡à¡à                       ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	}
	else {
		cout << "   ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
		cout << "   ¦¢                 ¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á                ¦¢" << endl;
		cout << "   ¦¢                   ¡á¡á¡á¡á¡á¡á¡á¡á                  ¦¢" << endl;
		cout << "   ¦¢                    ¡á¡á¡á¡á¡á¡á¡á                   ¦¢" << endl;
		cout << "   ¦¢                     ¡á¡á¡á¡á¡á¡á                    ¦¢" << endl;
		cout << "   ¦¢                      ¡á¡á¡á¡á¡á                     ¦¢" << endl;
		cout << "   ¦¢                        ¡à¡à¡à                       ¦¢" << endl;
		cout << "   ¦¢                        ¡à¡à¡à                       ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¢                           ^                         ¦¢" << endl;
		cout << "   ¦¢                     (  ( ¦¢ )  )                     ¦¢" << endl;
		cout << "   ¦¢                  (   (   ¦¢   )   )                  ¦¢" << endl;
		cout << "   ¦¢               £¨___(_____¦¢_____)___)                ¦¢" << endl;
		cout << "   ¦¢                                                     ¦¢" << endl;
		cout << "   ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	}

}

void list() {
	cout << "\n\n\n" << endl;
	cout << "        ¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "        ¦¢                               ¦¢" << endl;
	cout << "        ¦¢                               ¦¢" << endl;
	cout << "        ¦¢          ÇÊ¿äÇÑ Àç·á          ¦¢" << endl;
	cout << "        ¦¢                               ¦¢" << endl;
	cout << "        ¦¢     1. ¼³ÅÁ                   ¦¢" << endl;
	cout << "        ¦¢     2. °è¶õ ÈòÀÚ              ¦¢" << endl;
	cout << "        ¦¢     3. ·¹¸óÁó                 ¦¢" << endl;
	cout << "        ¦¢     4. Ãµ¿¬»ö¼Ò               ¦¢" << endl;
	cout << "        ¦¢                               ¦¢" << endl;
	cout << "        ¦¢                               ¦¢" << endl;
	cout << "        ¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}

void textcolor(int foreground, int background) { //text »ö±òÀ» ¹Ù²Ù°Ô ÇØÁÖ´Â ÇÔ¼ö
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void gotoxy(int x, int y) //ÄÜ¼Ö¿¡¼­ ¿øÇÏ´Â °÷¿¡ Ãâ·ÂÇÏ°Ô ÇØÁÖ´Â ÇÔ¼ö

{

	COORD Pos = { (short)x - 1, (short)y - 1 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}