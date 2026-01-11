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
// Function Name :  Minimum
// Input:           First node of linked list
// Output:          Smallest element from linked list
// Description:     Use to find minimum element present in linked list
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int Minimum(PNODE first)
{
    PNODE temp = first;
    
    int iMin = temp->data;

    while(temp != NULL)
    {
        if(temp->data < iMin)
        {
            iMin = temp->data;
        }
        temp = temp->next;
    }
    return iMin; 
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
    int iRet = 0;
   
    InsertFirst(&head,640);
    InsertFirst(&head,20);
    InsertFirst(&head,230); 
    InsertFirst(&head,110);

    iRet = Minimum(head);
    printf("Smallest element in linked list is : %d\n ", iRet); 
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
