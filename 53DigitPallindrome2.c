//check pallindrome or not by the accept number using for loop
//Input: 75
//Output :57

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = iNo;

    for(iRev = 0; iNo != 0; iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        
    }
    if(iTemp == iRev)  //return iTemp == iRev (we can only use this return )
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
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf("%d is Palindrom\n",iValue);
    }
    else
    {
        printf("%d is not Palindrom",iValue);
    }
   
    return 0;
}