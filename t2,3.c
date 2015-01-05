/****************************************
  > File Name:     z2.c
  > Author:        guqiang
  > Mail:          544104926@qq.com
  > Created Time:  2014年10月05日 星期日 20时58分04秒
  > Function:      截取二进制数的某一段
*****************************************/

#include<stdio.h>

/***************************************
 * name:           int cut(int head, int tail, int number, int *b)
 * Description:    截取number中的一段
 * calls:          no
 * called by:      main
 * input:          head, tail, number, b
 * output:         no;
 * return:         no;
***************************************/
void cut(int head, int tail, int number, int *b)
{
    int i;

    i = 0;
	number = number >> head;           //截取
	number = number << (32 - (tail - head + 1));
	number = number >> (32 - (tail - head + 1));

	for(i = 0;i <= (tail - head);i++)
	{
		if((number >> i) % 2 != 0)
		{
			b[i] = 1;
		}
		else
		{
			b[i] = 0;

		}                              //如果想要取反只要把上面的0和1互换

	}

	for(i = tail - head; i >= 0; i--)
	{
        printf("%d",b[i]);
		if(i == 0)
		{
			printf("\n");
		}
	}
}

int main()
{
	int p1;
    int i;
    int p2;
    int nu;
    int hat=1;
    int b[32]={0};

	while(hat==1)
	{
		printf("please enter an number:\n");
		scanf("%d",&nu);
		printf("please enter an p1:\n");
		scanf("%d",&p1);
		printf("please enter an p2:\n");
		scanf("%d",&p2);

		if(p1 >= p2)                   //错误输入提示
		{
			printf("error! 'p1' must be < 'p2'\n");
			hat = 1;
		}
		else
		{
			hat = 0;
		}
	}

    cut(p1,p2,nu,b);

	return 0;
}

