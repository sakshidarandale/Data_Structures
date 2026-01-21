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
        
        ////////////////////////////////////////////////////////////////////////////
        //
        // Function Name :  CountNthNodes
        // Input:           None
        // Output:          Returns the count of nodes at nth positions
        // Description:     Counts the number of nodes that appear at every nth 
        //                  position in the linked list
        // Author:          Sakshi Ravindra Darandale
        // Date:            10/01/2026
        //
        ////////////////////////////////////////////////////////////////////////////////

        int CountNthNodes(int no)
        { 
            node * temp =first;

            int iCount = 0;
            int iCnt = 1;
            
            if(temp == NULL)
            {
                cout<<"List is Empty\n";
            }

            while(temp != NULL)
            {
                if(iCnt % no == 0)
                {
                    iCount++;
                }
                temp = temp->next;      
                iCnt++;                     
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
       
    int iValue = 0;
    int iRet = 0;

    obj.InsertFirst(50);
    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    cout<<"Enter the position : ";
    cin>>iValue;
    
    iRet = obj.CountNthNodes(iValue);

    cout<<"Number of nodes at every "<<iValue<<"th position is : "<<iRet<<"\n";

    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////