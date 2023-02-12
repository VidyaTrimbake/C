#include<stdio.h>

extern int i;
extern int j;
extern int arr[4];

void gun();

int main()
{
	printf("value of i is %d\n",i);
	printf("Value of j is %d\n",j);
	
	int k = 51;
	printf("Value of k is %d\n",k);
	printf("Value from array is: %d\n",arr[0]);
	
	fun();
	gun();
	
	return 0;
}

int i = 21;
void gun()
{
	printf("Inside gun\n");
}
