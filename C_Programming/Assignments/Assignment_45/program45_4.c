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
// Function Name :  CountGreater
// Input:           First node of linked list, value to compare
// Output:          Count of elements greater than given value
// Description:     Use to count number of elements in linked list greater than specified value
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int CountGreater(PNODE first,int x)
{ 
    int iCount = 0;
    
    while(first != NULL)
    {
        if(first->data > x)
        {
            iCount++;
        }
        first = first->next; 
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
    int iValue = 0;
        
    InsertFirst(&head,50);
    InsertFirst(&head,95);
    InsertFirst(&head,35);
    InsertFirst(&head,20);
    InsertFirst(&head,10);
    
    printf("Enter the number: ");
    scanf("%d", &iValue);
    
    iRet = CountGreater(head, iValue);
    
    printf("Number of elements greater than %d are: %d\n", iValue, iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
