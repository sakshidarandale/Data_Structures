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
// Function Name :  SumDigits
// Input:           First node of linked list
// Output:          Prints sum of digits for each node
// Description:     Calculates and displays the sum of digits of each element of the linked list
// Author:          Sakshi Ravindra Darandale
// Date:            09/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void SumDigits(PNODE first)
{
   int iSum = 0;
   int iDigit = 0;
   int iValue = 0;
    
   while(first != NULL)
   {
       iValue = first->data;
       iSum = 0; 
       
       while(iValue != 0)
       {
           iDigit = iValue % 10;
           iValue = iValue / 10;
           iSum = iSum + iDigit;
       }
       printf("Sum of digits in %d is: %d\n", first->data, iSum);
    
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
    
    InsertFirst(&head, 55);
    InsertFirst(&head, 45);
    InsertFirst(&head, 35);
    InsertFirst(&head, 25);
    
    SumDigits(head);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
