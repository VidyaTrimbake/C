//Accept number of rows and number of columns from user and display below pattern.

//Input  : iRow = 4  iCol = 4
/*Output :  a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
*/            

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0,jCnt = 0;
    char ch = 'a';
    
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt%2==0)
            {
                printf("%d\t",jCnt);
            }
            else
            {
                printf("%c\t",ch);
                ch++;
            }
        }
        printf("\n");
    }    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and column");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}