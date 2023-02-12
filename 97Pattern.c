/*
    Row = 4
    Col = 4

    #111
    2#22
    33#3
    444#
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i=1; i<=iRow; i++)
    {
       for(j=1; j<=iRow; j++)
       {
            if(i==j)
            {
                printf("#");
            }
            else
            {
                printf("%d",i);
            }
       }
       printf("\n"); 
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of rows\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}