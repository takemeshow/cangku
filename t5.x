/****************************************
  > File Name:     t5.c
  > Author:        guqiang
  > Mail:          544104926@qq.com
  > Created Time:  2014年10月05日 星期日 23时54分12秒
  > Function:      求相邻位的异或转换
*****************************************/

#include<stdio.h>

/**************************************
 * name:           void change(int nu)
 * Description:    求相邻位异或
 * calls:          no
 * called by:      main
 * input:          nu
 * output:         no
 * return:         no
***************************************/
void change(int nu)
{
    int temp;
    int temp1;
    int temp2;
    int i;

    temp1 = ((nu >> 1) ^ (nu << 31));
	temp2 = ((nu << 1) ^ (nu >> 31));
	temp = temp1 ^ temp2;              //作异或运算

	for(i = 0; i < 32; i++)           //显示二进制数｀
	{
		printf("%d",(temp >> (31 - i)) % 2);
		if(i == 31)
		{
			printf("\n");
		}
	}
}

int main()
{
	int number;

	printf("please enter number\n");
	scanf("%d",&number);

    change(number);

	return 0;
}
