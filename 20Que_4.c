/*Accept number of rows and number of columns from user and display below pattern.

  Input  : iRow = 3   iCol = 5
  Output :  4  3  2  1  
            4  3  2  1  
            4  3  2  1  
            4  3  2  1  
*/            

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    for(jCnt=1; jCnt<=iCol; jCnt++)
    {
        for(iCnt=iRow; iCnt>=1; iCnt--)
        {
            printf("%d\t",jCnt); 
            //ch++  
        }
    printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}