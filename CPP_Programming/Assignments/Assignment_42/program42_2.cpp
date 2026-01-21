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
        // Input         : None
        // Output        : None
        // Description   : Initializes an empty linked list
        // Author        : Sakshi Ravindra Darandale
        // Date          : 06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        SinglyLLL()
        {
            cout<<"Linked List gets created\n";
            
            first=NULL;
            iCount=0;
        }
        
        //////////////////////////////////////////////////////////////
        //
        // Function Name : SearchLastOcc
        // Input         : Element to search
        // Output        : Position of element or -1
        // Description   : Searches last occurrence of an element
        // Author        : Sakshi Ravindra Darandale
        // Date          : 06/01/2026
        ///////////////////////////////////////////////////////////////

        int SearchLastOcc(int no)
        {
            node * temp = first;
            
            int iPos=1;
            int iLastPos = -1;
            
            while(temp!=NULL)
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
        // Input         :  Data of node
        // Output        :  Nothing
        // Description   :  Use to insert node at first position
        // Author        :  Sakshi Ravindra Darandale
        // Date          :  06/01/2026
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

    int iNo = 0;
    int iRet = 0;

    obj.InsertFirst(70);
    obj.InsertFirst(30);
    obj.InsertFirst(50);
    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    cout << "Enter the element to search : ";
    cin >> iNo;

    iRet = obj.SearchLastOcc(iNo);

    if (iRet == -1)
    {
        cout << "Element not found\n";
    }
    else
    {
        cout << "Last occurrence is at position : " << iRet <<"\n";
    }

    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////