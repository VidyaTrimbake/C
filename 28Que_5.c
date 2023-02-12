//return smallest number

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
int SmallestNum(PNODE First)
{
    int iSmall = First->data;
    while(First != NULL)
    {
       if(iSmall > (First->data))
       {
            iSmall = First->data;
       }
       First = First->next;
    }
    return iSmall;
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
    iRet = SmallestNum(Head);
    printf("Smallest Num is %d\n",iRet);
    return 0;
}