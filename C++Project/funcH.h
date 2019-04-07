#pragma once

using namespace std;

void textcolor(int, int);
void gotoxy(int, int);

void start(int&);
void guide();
void start_count(int& stage_num);
void stage_end();
void game_end();

void stage1(int& stage_score, int &stage_num);
void list();

void stage2(int& stage_score, int &stage_num);
void blending(int);

void stage3(int& stage_score, int &stage_num);
void squeeze(bool tf);

void ending_screen(int, int, int);
