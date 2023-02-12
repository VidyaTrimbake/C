/*Accept number of rows and number of columns from user and display below pattern.

  Input  : iRow = 3   iCol = 5
  Output :  1   2  3   4  
            5   6  7   8  
            9  10  11  12  

            //Uncompleted
*/            

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    for(jCnt=1; jCnt<=iCol; jCnt++)
    {
        for(iCnt=1; iCnt<=iRow; iCnt++)
        {
            printf("%d\t",iCnt); 
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