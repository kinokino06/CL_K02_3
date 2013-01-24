/* 作成者:1T4 伊藤純  */
/* 課題名:課題02_3　2012 11 5 */

#include<stdio.h>

void main(void){
	int pencil;

	printf("鉛筆の本数を入力してください \n");
	scanf("%d", &pencil);

	if(pencil == 0) {
		printf("エラー:数えられません\n");
	} else {
		switch(pencil%10)	{
		case 2:
		case 4:
		case 5:
		case 7:
		case 9:
			printf("えんぴつの数は,%d ほんです\n", pencil);
			break;
		case 0:
		case 1:
		case 6:
		case 8:
			printf("えんぴつの数は,%d ぽんです\n", pencil);
			break;
		case 3:
			printf("えんぴつの数は,%d ぼんです\n", pencil);
			break;
		}
		}
	}