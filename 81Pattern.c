//4
//A B C D
//Time Complexity - N

#include<stdio.h>

void Display(int iNo)  
{
    int iCnt = 0;
    char ch = 'A';

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%c\t",ch); 
        ch++;  
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}