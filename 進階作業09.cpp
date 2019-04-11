#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int M,D,S;
	printf("請輸入幾月幾日:");
	scanf("%d %d", &M, &D);

	S = (M * 2 + D) % 3;
	if(S==0)
	{
		printf("普通");
	}
	else if (S == 1)
	{
		printf("吉");
	}
	else if (S == 2)
	{
		printf("大吉");
	}
	else
	{
		printf("輸入錯誤");
	}

	system("pause");
	return 0;
}