#include<stdio.h>
#include<stdbool.h>

bool checkValue(iValue)
{
	if(iValue % 2 == 0)
	{
        return true;
	}
	else
	{
	    return false;
	}
	
}

int main()
{
	int iValue = 0;
	bool bRet;
	
	printf("Enter the value : \n");
	scanf("%d",&iValue);
	
    bRet = checkValue(iValue);
    if(bRet == true)
    {
    	printf("It is even number\n");
	}
	else
	{
	   	printf("It is odd number\n");
	}
	
	return 0;
}
