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
        // Function Name :  AdditionEven
        // Input:           None
        // Output:          Sum of even elements
        // Description:     Use to calculate addition of all even elements in linked list
        // Author:          Sakshi Ravindra Darandale
        // Date:            06/01/2026
        ////////////////////////////////////////////////////////////////////////////////

        int AdditionEven()
        {
            node * temp =first;
            int iSum = 0;
            
            while(temp != NULL)
            {
                if(temp->data % 2 == 0)
                {
                    iSum = iSum + temp->data;
                }
                
                temp = temp->next;  
            }
            return iSum;
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

    iRet = obj.AdditionEven();
    
    cout << "Addition of even elements is : " << iRet <<"\n";

    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function function
//
////////////////////////////////////////////////////////////////