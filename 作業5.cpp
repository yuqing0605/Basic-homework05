//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int hourOne,minuteOne,secondOne,hourTwo,minuteTwo,secondTwo,allSecondOne,allSecondTwo;
	
	printf("��J�p��");
	scanf(" %d",&hourOne);
	printf("��J����");
	scanf(" %d",&minuteOne);
	printf("��J���"); 
	scanf(" %d",&secondOne);
	printf("%d�p��%d����%d���\n",hourOne,minuteOne,secondOne);
	
	printf("��J�p��");
	scanf(" %d",&hourTwo);
	printf("��J����");
	scanf(" %d",&minuteTwo);
	printf("��J���"); 
	scanf(" %d",&secondTwo);
	printf("%d�p��%d����%d���\n",hourTwo,minuteTwo,secondTwo);
	
	allSecondOne=hourOne*3600+minuteOne*60+secondOne;
	allSecondTwo=hourTwo*3600+minuteTwo*60+secondTwo;
	printf("��Ʈt=%d",allSecondOne-allSecondTwo);
	
	system("pause");
	return 0;
}
