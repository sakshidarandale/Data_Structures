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
        
        ///////////////////////////////////////////////////////////////////////
        //
        // Function Name :  Maximum
        // Input:           None
        // Output:          Integer (largest element in linked list)
        // Description:     Use to find the maximum element from the linked list
        // Author:          Sakshi Ravindra Darandale
        // Date:            06/01/2026
        //
        ////////////////////////////////////////////////////////////////////////

        int Minimum()
        { 
            node * temp=first;
            int iMin=temp->data;
            
            while(temp!=NULL)
            {
                if(temp->data<iMin)
                {
                    iMin=temp->data;
                }
                temp=temp->next; 
            } 
            return iMin; 
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

    int iRet = 0;

    obj.InsertFirst(50);
    obj.InsertFirst(95);
    obj.InsertFirst(35);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    iRet = obj.Minimum();
    
    cout<<"Smallest element in linked list is : "<<iRet<<"\n";

    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function function
//
////////////////////////////////////////////////////////////////