#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node //total=20 byte
{
    int data;  //4
    struct node *next;          //8
    struct node *prev;    //X   //8
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;      //X

    if(*First == NULL)
    {
        *First = newn;  
    }
    else
    {
       newn->next = *First;
       (*First)->prev = newn;
       *First = newn; 
    }

}
void Display(PNODE First)
{
    printf("Elements in the LinkedList are:\n");
    printf("NULL<=> ");

    while (First != NULL)
    {
        printf("|%d|->",First->data);
        First = First -> next;
    }    
    printf("NULL \n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while (First != NULL)
    {
        iCnt++;
        First = First -> next;
    }   
    return iCnt; 
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    Display(Head);

    InsertFirst(&Head,51);
    Display(Head);

    InsertFirst(&Head,21);
    Display(Head);

    InsertFirst(&Head,11);
    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are: %d",iRet);

    return 0;
}