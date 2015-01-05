/*************************************************
  Copyright (C), 1988-1999, Huawei Tech. Co., Ltd.
  File name:       fac_n.c        
  Author:shq       Version:1.0        Date:2014.10.18 
  Description:     实现n的阶乘
  Others:          none
  Function List:  
    1.int fac(int n);
*************************************************/
#include <stdio.h>

int main()
{	
	int fac(int n);
	int n;
	int result; 
	
	scanf("%d",&n);
	
	result=fac(n);
	
	printf("%d",result);
	
	return 0;
}

/*************************************************
  Function:      int fac(int n) 
  Description:   实现n的阶乘 
  Calls:         none 
  Called By:     main  
  Input:         n        
  Return:        out
  Others:        none 
*************************************************/
int fac(int n)
{	
	int out;
	
	if(n==0||n==1)                   //结束
		{
			out=1;
		}
	else
		{
			f=fac(n-1)*n;                
		}
		
	return(out);
}
