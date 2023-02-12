#include<stdio.h>
int main()
{
	int no1 = 10;
	const int no2 = 10;
	
	
	printf("%d\n",no1);
	printf("%d\n",no2);

    no1++;
    no2++;
    
    no1 = 20;
    no2 = 20;
    
    no1--;
    no2--;
	
	
	return 0;
}
