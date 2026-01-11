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
// Function Name :  SecMaximum
// Input:           First node of linked list
// Output:          Second largest element
// Description:     Use to find second maximum element from linked list
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int SecMaximum(PNODE first)
{
    int iMax = first->data;
    int iSecMax = first->data;

    while(first != NULL)
    {
        if(first->data > iMax)
        {
            iSecMax = iMax;
            iMax = first->data;
        }
        else if((first->data > iSecMax) && (first->data != iMax))
        {
            iSecMax = first->data;
        }
        first = first->next;
    }
    return iSecMax; 
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
   
    InsertFirst(&head,240);
    InsertFirst(&head,320);
    InsertFirst(&head,230); 
    InsertFirst(&head,110);

    iRet = SecMaximum(head);
    printf("Second Largest element in linked list is : %d\n ", iRet); 
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
