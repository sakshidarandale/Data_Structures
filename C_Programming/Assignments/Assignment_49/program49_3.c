#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
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
// Function Name :  DisplayDivByThree
// Input:           First node of linked list
// Output:          Prints elements divisible by 3
// Description:     Displays all elements in the linked list that are divisible by 3
// Author:          Sakshi Ravindra Darandale
// Date:            10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void DisplayDivByThree(PNODE first)
{
    while(first != NULL)
    {
        if(first->data % 3 == 0)
        {
           printf("| %d | -> ", first->data);
        }
        first = first->next;
    }
    printf("NULL\n");
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Input:           Data of node
// Output:          Nothing
// Description:     Inserts a new node at the beginning of the linked list
// Author:          Sakshi Ravindra Darandale
// Date:            10/01/2026
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
    
    InsertFirst(&head,27);
    InsertFirst(&head,18);
    InsertFirst(&head,9);
    InsertFirst(&head,10);
    
    DisplayDivByThree(head);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
