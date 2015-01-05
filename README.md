cangku
======
#include<reg51.h>
unsigned char code w1[]=
{
 0,4,252,15,0,0,0,0,0,16,255,63,32,1,32,1,32,1,32,33,16,33,8,33,4,62,3,0,0,0,0,0
 };
unsigned char code w2[]=
{ 
 0,4,248,15,8,4,8,4,8,4,248,7,8,4,8,4,8,4,248,7,8,4,0,16,255,63,0,0,0,0,0,0
};
unsigned char code w3[]=
{ 
 4,1,4,1,4,9,236,31,21,9,21,9,5,9,244,63,4,1,132,2,132,2,68,4,36,56,20,16,0,0,0,0
};
unsigned char code w4[]=
{ 
 0,14,248,1,8,0,136,0,132,0,132,0,252,31,128,0,144,2,144,4,136,8,132,16,162,16,64,0,0,0,0,0
};
unsigned char code w5[]=
{ 
 0,8,192,31,30,8,146,8,146,8,146,8,146,8,146,31,30,16,210,23,2,16,0,16,0,10,0,4,0,0,0,0
};
 							
void LEDDelay(int ms)
{
	int i;
	while(ms --)
		for(i=0;i<140;i++);
}
void show(unsigned char *id)
{
	int i,j;
	unsigned char pos;
	j=0;
	pos=0x01;

	for(i=0;i<16;i++)
	{																	 
			if(pos==0)pos=0x01;
			P1=id[j++];
			P2=id[j++];
			if(i<8)
			{
				P0=~pos;
				P3=0xff;
			}
			else
			{
				P0=0xff;
				P3=~pos;
			}
			pos<<=1;
			LEDDelay(1);
	}
	
}

void main()
{
    int k;
	while(1)
	{
		 for(k = 0;k < 10;k++)
		 {
		     show(w1);
		 }
		  for(k = 0;k < 10;k++)
		 {
		     show(w2);
		 }
		  for(k = 0;k < 10;k++)
		 {
		     show(w3);
		 }
		  for(k = 0;k < 10;k++)
		 {
		     show(w4);
		 }
		  for(k = 0;k < 10;k++)
		 {
		     show(w5);
		 }
	}
}
