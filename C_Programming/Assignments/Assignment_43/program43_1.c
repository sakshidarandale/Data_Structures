/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayPerfect
// Input:           First node of linked list
// Output:          Displays perfect numbers from linked list
// Description:     Use to display all perfect numbers present in linked list
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int DisplayPerfect(PNODE first)
{
    int iSum = 0;
    int iCnt = 0;
    
    while(first != NULL)
    {
        iSum = 0;

        for(iCnt = 1; iCnt <= first->data / 2; iCnt++)
        {
            if(first->data % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        
        if(iSum == first->data)
        {
            printf("%d\t", first->data);
        }
        
        first = first->next;
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
    
    InsertFirst(&head,89);
    InsertFirst(&head,6);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);
    
    DisplayPerfect(head);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
