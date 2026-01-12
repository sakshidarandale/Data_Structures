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
// Function Name :  ReplaceNegative
// Input:           First node of linked list
// Output:          Repalced Negative numbers with 0
// Description:     Use to replace negative numbers and make them zero
// Author:          Sakshi Ravindra Darandale
// Date:            08/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void ReplaceNegative(PNODE first)
{ 
    while(first != NULL)
    {
        if(first->data < 0)  
        {
            first->data = 0 ;      
        }
        printf("%d\t", first->data); 
        
        first = first->next;         
    } 
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Input:           Data of node
// Output:          Nothing
// Description:     Use to insert node at first position in linked list
// Author:          Sakshi Ravindra Darandale
// Date:            08/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;
    
    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;
    InsertFirst(&head,-50);
    InsertFirst(&head,-40);
    InsertFirst(&head,30);
    InsertFirst(&head,-20);
    InsertFirst(&head,10);
    
    ReplaceNegative(head);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
