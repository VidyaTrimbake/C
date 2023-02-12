#include<stdio.h>

int main()
{
	int Arr[4] = {10,20};
	int Brr[4];
	
	printf("%d\n",Arr[0]);
	printf("%d\n",Arr[1]);
	printf("%d\n",Arr[2]);
	printf("%d\n",Arr[3]);
	
	
	Brr[0] = 10;
	Brr[1] = 20;
	
	printf("%d\n",Arr[0]);
	printf("%d\n",Arr[1]);
	printf("%d\n",Arr[2]);
	printf("%d\n",Arr[3]);
	
	return 0;
	
}
