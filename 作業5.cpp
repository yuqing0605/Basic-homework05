//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int hourOne,minuteOne,secondOne,hourTwo,minuteTwo,secondTwo,allSecondOne,allSecondTwo;
	
	printf("輸入小時");
	scanf(" %d",&hourOne);
	printf("輸入分鐘");
	scanf(" %d",&minuteOne);
	printf("輸入秒數"); 
	scanf(" %d",&secondOne);
	printf("%d小時%d分鐘%d秒數\n",hourOne,minuteOne,secondOne);
	
	printf("輸入小時");
	scanf(" %d",&hourTwo);
	printf("輸入分鐘");
	scanf(" %d",&minuteTwo);
	printf("輸入秒數"); 
	scanf(" %d",&secondTwo);
	printf("%d小時%d分鐘%d秒數\n",hourTwo,minuteTwo,secondTwo);
	
	allSecondOne=hourOne*3600+minuteOne*60+secondOne;
	allSecondTwo=hourTwo*3600+minuteTwo*60+secondTwo;
	printf("秒數差=%d",allSecondOne-allSecondTwo);
	
	system("pause");
	return 0;
}
