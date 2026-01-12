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
// Function Name :  DisplayPrime
// Input:           First node of linked list
// Output:          Prints all prime numbers in the linked list
// Description:     Traverses the linked list and displays nodes which contain prime numbers
// Author:          Sakshi Ravindra Darandale
// Date:            09/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE first)
{
    int iFrequency = 0;
    int iCnt = 0;
    
    while(first != NULL)
    {
        iFrequency = 0;

        for(iCnt = 2; iCnt <= first->data / 2; iCnt++)
        {
            if(first->data % iCnt == 0)
            {
                iFrequency++;
                break;
            }
        }
        
        if(iFrequency == 0 && first->data > 1)
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
    
    InsertFirst(&head, 13);
    InsertFirst(&head, 11);
    InsertFirst(&head, 31);
    InsertFirst(&head, 10);
    
    printf("Prime numbers in the linked list are:\n");
    DisplayPrime(head);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
