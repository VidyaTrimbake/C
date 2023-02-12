#include<stdio.h>

void Demo()
{
	static int A = 11;
	A++;
	printf("Value from Demo is : %d\n",A);
	
}

void Hello()
{
	static int B = 10;
	B++;
	printf("Value from Hello is : %d\n",B);
	
}
 
 
 


int main()
{
	Demo();
	Demo();
	Demo();
	
	Demo();
	Demo();
	
	Hello();
	Hello();
	
	
	
	
	return 0;
}
