//Write a program which search first occurence of particular element from singly linear list. Function should return position which elements is found.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  
    {
        *First = newn;
    }
    else                
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}


void Occurence(PNODE First, int iNo)
{
    int iCnt = 1; 
    BOOL flag = FALSE;

    while(First != NULL)
    {
        if(First->data == iNo)
        {
           flag = TRUE;
           break;
        }
        iCnt++;
        First = First -> next;
    }
    if(flag)  
        printf("Element is present in the list at the position: %d\n", iCnt);  
    else  
        printf("Element is not present in the list\n"); 
    //return iCnt;
}


int main()
{
    PNODE Head = NULL;
    int iNo = 0;

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);
    InsertLast(&Head,21);
    
    Display(Head);

    printf("Please enter the number : ");
    scanf("%d",&iNo);

    Occurence(Head, iNo);
    return 0;
}
