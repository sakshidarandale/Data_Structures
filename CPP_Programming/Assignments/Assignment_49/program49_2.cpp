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
        
        ///////////////////////////////////////////////////////////////////////////////
        //
        // Function Name :  CheckAllPositive
        // Input:           None
        // Output:          Returns true if all elements are positive, otherwise false
        // Description:     Checks whether all elements of the linked list 
        //                  are positive numbers.
        // Author:          Sakshi Ravindra Darandale
        // Date:            09/01/2026
        //
        ////////////////////////////////////////////////////////////////////////////////

        bool CheckAllPositive()
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

        ////////////////////////////////////////////////////////////////
        //
        // Function Name :  InsertFirst
        // Input:           Data of node
        // Output:          Nothing
        // Description:     Use to insert node at first position
        // Author:          Sakshi Ravindra Darandale
        // Date:            09/01/2026
        //
        ////////////////////////////////////////////////////////////////
        
        void InsertFirst(int no)
        {
            node * newn = NULL;
            
            newn = new node(no);
            
            if(first == NULL)
            {
                first=newn;
            }
            else
            {
                newn->next = first;
                first = newn;
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
     
    bool bRet = 0;


    obj.InsertFirst(-50);
    obj.InsertFirst(40);
    obj.InsertFirst(-30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    bRet = obj.CheckAllPositive();

    if(bRet==true)
    {
        cout<<" All elements are positive\n";
    }
    else
    {
        cout<<" All elements are not positive\n";
    }
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////