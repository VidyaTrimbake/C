#include<stdio.h>

int main()
{
	int iNo1 = 0, iNo2 = 0;
	int iRet = 0;
	
	printf("Enter the 1st no : ");
	scanf("%d",&iNo1);
	
	printf("Enter the 2nd no : ");
	scanf("%d",&iNo2);
	
	iRet = Addition(iNo1,iNo2);
	
	printf("Addition is : ",iRet);
	
	return 0;
	
}

int Addition(iValue1,iValue2)
{
	int iAns = 0;
	iAns = iValue1 + iValue2;
	
	return iAns; 
}
