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
// Function Name :  CountPrime
// Input:           First node of linked list
// Output:          Count of prime numbers in the linked list
// Description:     Traverses the linked list and counts nodes whose data is prime
// Author:          Sakshi Ravindra Darandale
// Date:            09/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int CountPrime(PNODE first)
{
    int iFrequency = 0;
    int iCnt = 0;
    int iCount = 0;
    
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
            iCount++;
        }
        first = first->next;
    }
    return iCount;
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
    
    InsertFirst(&head, 13);
    InsertFirst(&head, 11);
    InsertFirst(&head, 31);
    InsertFirst(&head, 10);
    
    iRet = CountPrime(head);
    
    printf("Count of prime numbers in the linked list is: %d\n", iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
