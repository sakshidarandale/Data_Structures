#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node * next;
        
        node(int no)
        {
            data=no;
            next=NULL;
        }
};

class SinglyLLL
{
    public:
        node * first;
        int iCount;
        
        ///////////////////////////////////////////////////////////////
        // Function Name : SinglyLLL(Constructor)
        // Description   : Initializes an empty linked list
        // Input         : None
        // Output        : None
        ///////////////////////////////////////////////////////////////

        SinglyLLL()
        {
            cout<<"Linked List gets created\n";
            
            first=NULL;
            iCount=0;
        }

        /////////////////////////////////////////////////////////////////////////////
        // Function Name :  DisplayPrime
        // Input:           None
        // Output:          Displays prime numbers from linked list
        // Description:     Use to display all prime numbers present in linked list
        // Author:          Sakshi Ravindra Darandale
        // Date:            06/01/2026
        ////////////////////////////////////////////////////////////////////////////////

        void DisplayPrime()
        { 
            node *temp = first;
            int iFrequency = 0;
            int iCnt = 0;
            
            while(temp != NULL)
            {
                iFrequency = 0;

                for(iCnt = 2; iCnt <= temp->data / 2; iCnt++)
                {
                    if(temp->data % iCnt == 0)
                    {
                        iFrequency++;
                        break;
                    }
                }
                
                if(iFrequency == 0 && temp->data > 1)
                {
                    printf("%d\t", temp->data);
                }
            
                temp = temp->next;
            }
        }
        
        //////////////////////////////////////////////////////////////////
        //
        // Function Name :  InsertFirst
        // Input:           Data of node
        // Output:          Nothing
        // Description:     Use to insert node at first position
        // Author:          Sakshi Ravindra Darandale
        // Date:            06/01/2026
        //
        //////////////////////////////////////////////////////////////////
        
        void InsertFirst(int no)
        {
            node * newn =NULL;
            
            newn = new node(no);
            
            if(first == NULL)
            {
                first=newn;
            }
            else
            {
                newn->next=first;
                first=newn;
            
            }
            iCount++;
        }
};

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    SinglyLLL obj;
    
    obj.InsertFirst(89);
    obj.InsertFirst(6);
    obj.InsertFirst(17);
    obj.InsertFirst(28);
    obj.InsertFirst(11);

    obj.DisplayPrime();

    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////