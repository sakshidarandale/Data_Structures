#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
// Function Name :  CheckAllPositive
// Input:           First node of linked list
// Output:          Returns true if all elements are positive, otherwise false
// Description:     Checks whether all elements of the linked list are positive numbers
// Author:          Sakshi Ravindra Darandale
// Date:            10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

bool CheckAllPositive(PNODE first)
{
    while(first != NULL)
    {
       if(first->data < 0)
       {
            return false;
       }
       first = first->next;
    }
    return true;
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
    bool bRet = true;
    
    InsertFirst(&head,-50);
    InsertFirst(&head,40);
    InsertFirst(&head,-30);
    InsertFirst(&head,-20);
    InsertFirst(&head,10);
    
    bRet = CheckAllPositive(head);
    
    if(bRet == true)
    {
        printf("All elements are positive");
    }
    else
    {
        printf("All elements are not positive");
    }

    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
