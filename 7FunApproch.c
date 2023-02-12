#include<stdio.h>

int Multiplication(int iValue1, int iValue2)
{
	int iMult = 0;
	iMult = iValue1*iValue2; //business logic
	return iMult;
}

int main()
{
	int iNo1 = 0, iNo2 = 0;
	int iAns = 0;
	
	printf("Enter first number : \n");
	scanf("%d",&iNo1);
	
	printf("Enter second number : \n");
	scanf("%d",&iNo2);
	
	iAns = Multiplication(iNo1,iNo2);
	printf("Multiplication is : %d\n",iAns);
	
	return 0;
}
