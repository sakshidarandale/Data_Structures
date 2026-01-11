/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountOdd
// Input:           First node of linked list
// Output:          Integer count of odd elements
// Description:     Use to count number of odd values present in linked list
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int CountOdd(PNODE first)
{ 
    int iCount=0;
    
    while(first!=NULL)
    {
        if(first->data %2 != 0)
        {
            iCount++;
        }
        first=first->next; 
    } 
    return iCount; 
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Input:           Data of node
// Output:          Nothing
// Description:     Use to insert node at first position in linked list
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first,int no)
{
    PNODE newn=NULL;
    
    newn=(PNODE)malloc(sizeof(NODE));
    
    newn->data=no;
    newn->next=NULL;
    
    if(*first==NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next=*first;
        *first=newn;
    }
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    PNODE head=NULL;
    int iRet=0;
        
    InsertFirst(&head,50);
    InsertFirst(&head,95);
    InsertFirst(&head,35);
    InsertFirst(&head,20);
    InsertFirst(&head,10);
    
    iRet=CountOdd(head);
    
    printf("Number of odd values are : %d\n ",iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
