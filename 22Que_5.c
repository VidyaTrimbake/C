//Accept number of rows and number of columns from user and display below pattern.
//****Uncompleted*****
//Input  : iRow = 4  iCol = 4
/*Output :  *   *   *   *
            *   @   @   *
            *   @   @   *
            *   *   *   *

*/            


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0,jCnt = 0;
    for(iCnt=1;iCnt<=iCol;iCnt++)
    {
        for(jCnt=1;jCnt<=iRow;jCnt++)
        {
            if((iCnt==1) || (jCnt==1) || (iCnt==iRow) || (jCnt==iCol))
            {
                printf("%d\t",jCnt);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    } 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and column:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}