#include<stdio.h>
int powers(int,int);
void  main()
{
	int a = 0xAB57,p = 0x000F,z;
	int i = 0,res = 0;
	printf("hexa-decimal = %X\n",a);
	while(a)
	{
		z = ( a & p );
		if(z=='A')
			z=10;
		else if(z=='B')
			z=11;
		else if(z=='C')
			z=12;
		else if(z=='D')
			z=13;
		else if(z=='E')
			z=14;
		else if(z=='F')
			z=15;
		res += (z*powers(16,i));
		a = a>>4;
		i++;
	}
	printf("decimal = %d\n",res);
}
int powers(int base,int pow)
{
	int i=pow,res = 1;
	if(i==0)
		return 1;
	else
	{
		for(;i>0;i--)
			res = res * base;
		return res;
	}		
}
