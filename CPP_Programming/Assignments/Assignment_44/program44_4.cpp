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
        // Function Name : Frequency
        // Input         : None
        // Output        : Frequency count of given number 
        // Description   : Use to count frequency of a specific number in linked list
        // Author:       : Sakshi Ravindra Darandale
        // Date:         :  06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        int Frequency(int no)
        { 
            node * temp=first;
            
            int iCount = 0;
            
            while(temp != NULL)
            {
                if(temp->data == no)
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
    int iNo = 0;

    obj.InsertFirst(30);
    obj.InsertFirst(95);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(30);

    cout<<"Enter the number : \n";
    cin>>iNo;
    
    iRet = obj.Frequency(iNo);
    
    cout<<"Frequency of the number is : "<<iRet<<"\n";

    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////