#include<stdio.h>

int fun()
{
	auto int i = 10;
	auto int j = 20;
	int ret = 0;
	
	ret = i + j;

	return ret;
}

int main()
{
	printf("Inside main");
	
	fun();
	
	printf("%d",ret);
	return 0;
}
