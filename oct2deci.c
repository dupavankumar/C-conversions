#include<stdio.h>
int powers(int,int);
void  main()
{
	int a = 0265,p = 0x0F,z;
	int i = 0,res = 0;
	printf("octal number = %o\n",a);
	while(a)
	{
		z = ( a & p );
		res += (z*powers(8,i));
		a = a>>3;
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
