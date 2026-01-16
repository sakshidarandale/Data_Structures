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
        
        ////////////////////////////////////////////////////////////////////////////////
        // Function Name :  SecondMaximum
        // Input         :  None
        // Output        :  Integer (Second maximum element)        
        // Description   :  Use to find second maximum element from linked list
        // Author        :  Sakshi Ravindra Darandale
        // Date          :  06/01/2026
        ////////////////////////////////////////////////////////////////////////////////

        int SecMaximum()
        { 
            node * temp = first;
            int iMax = temp->data;
            int iSecMax = temp->data;

            while(temp != NULL)
            {
                if(temp->data > iMax)
                {
                    iSecMax = iMax;
                    iMax = temp->data;
                }
                else if((temp->data > iSecMax) && (temp->data != iMax))
                {
                    iSecMax = temp->data;
                }
                temp = temp->next;
            }
            return iSecMax; 
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
    
    int iRet = 0;
    
    obj.InsertFirst(41);
    obj.InsertFirst(32);
    obj.InsertFirst(20);
    obj.InsertFirst(11);

    iRet = obj.SecMaximum();
    
    cout << "The Second Maximum element is : " << iRet <<"\n";

    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function function
//
////////////////////////////////////////////////////////////////