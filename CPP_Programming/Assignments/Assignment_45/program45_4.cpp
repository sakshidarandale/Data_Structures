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
        
        ///////////////////////////////////////////////////////////////
        //
        // Function Name : CountGreater
        // Input         : Value to compare
        // Output        : Count of elements greater than given value.
        // Description   : Use to count number of elements in linked list greater than specified value
        // Author:       : Sakshi Ravindra Darandale
        // Date:         :  06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        int CountGreater(int x)
        { 
            node * temp = first;
            int iCount = 0;
            
            while(temp != NULL)
            {
                if(temp->data > x)
                {
                    iCount++;
                }
                temp = temp->next; 
            } 
            return iCount; 
        }

        ////////////////////////////////////////////////////////////////
        //
        // Function Name :  InsertFirst
        // Input:           Data of node
        // Output:          Nothing
        // Description:     Use to insert node at first position
        // Author:          Sakshi Ravindra Darandale
        // Date:            06/01/2026
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

    int iRet = 0;
    int iValue = 0;
    
    obj.InsertFirst(70);
    obj.InsertFirst(95);
    obj.InsertFirst(35);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    cout<<"Enter the number: \n";
    cin>>iValue;
    
    iRet=obj.CountGreater(iValue);
    
   cout<<"Number of elements greater than "<<iValue<< " are : "<<iRet;
   
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////