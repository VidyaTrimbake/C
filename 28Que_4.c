//return largest number

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements in the list are:\n");
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
    
}
int LargestNum(PNODE First)
{
    int iLarge = First->data;
    while(First != NULL)
    {
       if(iLarge < (First->data))
       {
            iLarge = First->data;
       }
       First = First->next;
    }
    return iLarge;
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,10);
    InsertFirst(&Head,20);
    InsertFirst(&Head,330);
    InsertFirst(&Head,40);
    InsertFirst(&Head,101);
    
    Display(Head);

    int iRet = 0;
    iRet = LargestNum(Head);
    printf("LargestNum is %d\n",iRet);
    return 0;
}