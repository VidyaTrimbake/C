#include<stdio.h>

int no = 10;

void gun()
{
	register float fValue = 2.3;
	
	printf("Value of f is %f",fValue);
}

int main()
{
	printf("Inside Main");
	gun();
	
	return 0;
}
