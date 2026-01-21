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
        // Function Name : FirstOccur
        // Input         : 
        // Output        : Position of first occurrence of element
        // Description   : Use to find the first occurrence of given element in linked list
        // Author:       : Sakshi Ravindra Darandale
        // Date:         :  06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        int FirstOccur(int no)
        { 
            node * temp = first;
            
            int iPos = 1;
            
            while(temp != NULL)
            {
            if(temp->data == no)
            {
                return iPos;
            }
            temp = temp->next;
            iPos++;
            }
            return -1;   
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
    
    iRet=obj.FirstOccur(iNo);
    
    if(iRet == -1)
    {
        cout<<"Element not found\n";
    }
    else
    {
        cout<<"First occurrence of is at position "<<iRet<<"\n";
    }
   
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////