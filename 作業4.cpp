//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int seconds,hour,minute,leftover;
	
	printf("請輸入要計算的秒數:");
	scanf(" %d",&seconds);
	
	hour=seconds/3600;
	
	minute=(seconds-hour*3600)/60;
	
	leftover=(seconds-hour*3600)-(minute*60);
	
	printf("=%d小時%d分鐘%d秒",hour,minute,leftover);
	
	system("pause");
	return 0;
}
