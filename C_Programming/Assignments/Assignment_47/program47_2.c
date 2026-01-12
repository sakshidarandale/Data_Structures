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
// Description:     Inserts a new node at the beginning of the linked list
// Author:          Sakshi Ravindra Darandale
// Date:            09/01/2026
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
// Function Name :  CountDigits
// Input:           First node of linked list
// Output:          Prints number of digits for each node
// Description:     Counts and displays the number of digits in each element of the linked list
// Author:          Sakshi Ravindra Darandale
// Date:            09/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void CountDigits(PNODE first)
{
    int iCount = 0;
    int iValue = 0;
    
    while(first != NULL)
    {
        iValue = first->data;
        iCount = 0;
        
        if(iValue == 0)
        {
            iCount = 1;
        }
        else
        {
            while(iValue != 0)
            {
                iCount++;
                iValue = iValue / 10;
            } 
        }
        
        printf("Count of digits in %d is : %d\n", first->data, iCount);
        
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
    
    InsertFirst(&head, 430);
    InsertFirst(&head, 5500);
    InsertFirst(&head, 250);
    InsertFirst(&head, 10);
    
    CountDigits(head);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
