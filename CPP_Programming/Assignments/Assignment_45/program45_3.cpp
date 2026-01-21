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
        // Function Name : LastOccur
        // Input         : Element to search
        // Output        : Position of last occurrence of element.
        // Description   : 
        // Author:       : Sakshi Ravindra Darandale
        // Date:         :  06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        int LastOccur(int no)
        { 
            node * temp = first;
            
            int iPos = 1;
            int iLastPos = -1;
            
            while(temp != NULL)
            {
            if(temp->data == no)
            {
                iLastPos = iPos;
            }
            temp = temp->next;
            iPos++;
            }
            return iLastPos;   
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
    int iNo = 0;
    
    obj.InsertFirst(70);
    obj.InsertFirst(20);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    cout<<"Enter the element to search : \n";
    cin>>iNo;
    
    iRet=obj.LastOccur(iNo);
    
    if(iRet == -1)
    {
        cout<<"Element not found\n";
    }
    else
    {
        cout<<"Last occurrence of is at position "<<iRet<<"\n";
    }
   
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////