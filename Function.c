#include<stdio.h>

int Addition(int iValue,int iValue2)  //Dukan
{
	int iOutput = 0;
	
	iOutput = iValue + iValue2;
	
	return iOutput;
}

int main()     //ghar
{
	int iNo1 = 100;	
		
	int iNo2 = 11;
	
	int iAns = 0;
	
	iAns = Addition(iNo1,iNo2);
	//iAns = Addition(10,11);
	
	printf("Addition is : %d\n",iAns);
	
	return 0;
	
}
