#include "funcH.h"

int stage_score[3];
int stage_num = 1;

int main() {
	start(stage_num);

	stage1(stage_score[0], stage_num);
	stage2(stage_score[1], stage_num);
	stage3(stage_score[2], stage_num);

	ending_screen(stage_score[0], stage_score[1], stage_score[2]);

	return 0;
}

