///////////////////////////////////////////////////////////////
//    GENERALIZED DATA STRUCTURE LIBRARY                     //
///////////////////////////////////////////////////////////////

/*
--------------------------------------------------------------------------------------------
Type                 Name of class for node                 Name of class for Functionality
--------------------------------------------------------------------------------------------           
Singly Linear        SinglyLLLnode                          SinglyLLL          Done
Singly Circular      SinglyCLLnode                          SinglyCLL          
Doubly Linear        DoublyLLLnode                          DoublyLLL          Done
Doubly Circular      DoublyCLLnode                          DoublyCLL           
---------------------------------------------------------------------------------------------   
*/

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////
//   Singly Linear LinkedList using Generic Approach
//////////////////////////////////////////////////////////

#pragma pack(1)
template <class T>
class SinglyLLnode
{
    public:
        T data;
        SinglyLLnode<T> *next;
        
        SinglyLLnode(T no)
        {
            this->data=no;
            this->next=NULL;
        }
};
template <class T>
class SinglyLLL
{
    private:        
        SinglyLLnode<T> * first;
        int iCount;

    public:
        SinglyLLL();
    
        void InsertFirst(T);
        void InsertLast(T);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int Count();
        void InsertAtPos(T,int);
        void DeleteAtPos(int);    
};
template <class T>
SinglyLLL<T> :: SinglyLLL()
{
    cout<<"Object of SinglyLL gets created.\n";
    this->first = NULL;
    this->iCount = 0;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Input:           Data of node
// Output:          Nothing
// Description:     Use to insert node at first position
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLLL<T> :: InsertFirst(T no)
{
    SinglyLLnode<T> *  newn = NULL;

    newn = new SinglyLLnode<T>(no);
    
    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}

template <class T>
void SinglyLLL<T> :: InsertLast(T no)
{
    SinglyLLnode<T> *  newn = NULL;
    SinglyLLnode<T> *  temp = NULL;

    newn = new SinglyLLnode<T>(no);

    if(this->iCount == 0) 
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
    this->iCount++;
}

template <class T>
void SinglyLLL<T> :: DeleteFirst()
{
    SinglyLLnode<T> *  temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)    
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        this->first = this->first -> next;
        delete temp;
    }

    this->iCount--;
}

template <class T>
void SinglyLLL<T> :: DeleteLast()
{
    SinglyLLnode<T> *  temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)    
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        delete temp->next;
        temp->next = NULL;

    }
    this->iCount--;
}

template <class T>
void SinglyLLL<T> :: Display()
{
    SinglyLLnode<T> *  temp = NULL;
    int iCnt = 0;

    temp = this->first;

    for(iCnt = 1; iCnt <= this->iCount; iCnt++)
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp->next;
    }

    cout<<"NULL\n";
}

template <class T>
int SinglyLLL<T> :: Count()
{
    return this->iCount;
}

template <class T>
void SinglyLLL<T> :: InsertAtPos(T no, int pos)
{
    SinglyLLnode<T> *  temp = NULL;
    SinglyLLnode<T> *  newn = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > this->iCount + 1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    else if(pos == this->iCount+1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new SinglyLLnode<T>(no);

        temp = this->first;
        
        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        this->iCount++;
    }
}

template <class T>
void SinglyLLL<T> :: DeleteAtPos(int pos)
{
    SinglyLLnode<T> *  temp = NULL;
    SinglyLLnode<T> *  target = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > this->iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        this->DeleteFirst();
    }
    else if(pos == this->iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;
        
        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        delete target;

        this->iCount--;
    }
}

////////////////////////////////////////////////////////
//   Doubly Linear LinkedList using Generic Approach
////////////////////////////////////////////////////////

#pragma pack(1)
template<class T>
class DoublyLLLnode
{
    public:
    T data;
    DoublyLLLnode *next;
    DoublyLLLnode *prev;
    
    DoublyLLLnode(T no)
    {
        this->data=no;
        this->next=NULL;
        this->prev=NULL;
    } 
};

template<class T>
class DoublyLLL
{
    private:
        DoublyLLLnode<T> *first;
        int iCount;
    
    public:
        DoublyLLL();
    
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    
    void Display();
    int Count();
 
};

template<class T>
DoublyLLL<T> :: DoublyLLL()
{
    cout<<"Linked List gets created";
    this->first=NULL;
    this->iCount=0;
}

template<class T>
void DoublyLLL<T>:: InsertFirst(T no)
{
    DoublyLLLnode<T> *newn = NULL;
    
    newn = new DoublyLLLnode<T>(no);
    
    if(this->first==NULL)
    {
        this->first=newn;
    }
    else
    {
        newn->next=this->first;
        this->first->prev=newn;
        this->first=newn;
    }
    this->iCount++;
}

template<class T>
void DoublyLLL<T> :: InsertLast(T no)
{
    DoublyLLLnode<T> *newn = NULL;
    DoublyLLLnode<T> *temp = NULL;
    
    newn = new DoublyLLLnode<T>(no);
    
    if(this->first==NULL)
    {
        this->first=newn;
    }
    else
    {
        temp=this->first;
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        
        temp->next=newn;
        newn->prev=temp;
    }
    this->iCount++;
}

template<class T>
void DoublyLLL<T> :: InsertAtPos(T no,int pos)
{
    DoublyLLLnode<T> *temp=NULL;
    DoublyLLLnode<T> *newn=NULL;
    
    int iCnt=0;
    
    if((pos<1) ||(pos>this->iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }
    
    if(pos==1)
    {
        this->InsertFirst(no);
    }
    
    else if(pos==iCount+1)
    {
        this->InsertLast(no);
    }
    
    else
    {
        newn =new DoublyLLLnode<T>(no);
        
        temp=this->first;
        
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        
        newn->next=temp->next;
        temp->next->prev=newn;
        
        temp->next=newn;
        newn->prev=temp;
        
        this->iCount++;
    }
}

template<class T>
void DoublyLLL<T> :: DeleteFirst()
{
    if(this->first == NULL)     
    {
        return;
    }
    
    else if(this->first->next == NULL)   
    {
        delete(this->first);
        this->first=NULL;
    }
    
    else                                 
    {
       this->first=this->first->next;
       delete this->first->prev;
       this->first->prev=NULL;
    }
    this->iCount--;
}

template<class T>
void DoublyLLL<T>:: DeleteLast()
{
    DoublyLLLnode<T> *temp=NULL;
    if(this->first == NULL)      
    {
        return;
    }
    
    else if(this->first->next == NULL)   
    {
        delete(this->first);
        this->first=NULL;
    }
    
    else                                  
    {
        temp=this->first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    this->iCount--;
}

template<class T>
void  DoublyLLL<T> ::DeleteAtPos(int pos)
{
    DoublyLLLnode<T> *temp=NULL;
    int iCnt=0;
    
    if((pos<1) ||(pos>this->iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }
    
    if(pos==1)
    {
        this->DeleteFirst();
    }
    
    else if(pos==iCount)
    {
        this->DeleteLast();
    }
    
    else
    {
        temp=this->first;
        
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        
        this->iCount--;
    }
}

template<class T>
void DoublyLLL<T> :: Display()
{
    DoublyLLLnode<T> *temp = NULL;
    
    temp=this->first;
    
    cout<<"\nNULL<=>";
    while(temp!=NULL)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

template<class T>
int DoublyLLL<T> :: Count()
{
    return this->iCount;
}

///////////////////////////////////////////////////////////////////////
//          Singly Circular LinkedList using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)
template <class T>
class SinglyCLLnode
{
    public:
    
        T data;
        SinglyCLLnode<T> *next;
        
        SinglyCLLnode(T no)
        {
            this->data=no;
            this->next=NULL;
        }
};

template <class T>
class SinglyCLL
{
    private:
        SinglyCLLnode<T> * first;
        SinglyCLLnode<T> * last;
        int iCount;

    public:
        SinglyCLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int Count();
        void DeleteAtPos(int pos);
        void InsertAtPos(T no, int pos);
};

template <class T>
SinglyCLL<T>::SinglyCLL()
{
    cout<<"Inside constructor of SinglyCLL\n";

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template <class T>
void SinglyCLL<T>::InsertFirst(T no)
{
    SinglyCLLnode<T> * newn = NULL;

    newn = new SinglyCLLnode<T>(no);

    if(this->first == NULL && this->last == NULL) 
    {
        this->first = newn;
        this->last = newn;

        this->last->next = this->first;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;

        this->last->next = this->first;
    }

    this->iCount++;
}

template <class T>
void SinglyCLL<T>::InsertLast(T no)
{
    SinglyCLLnode<T> * newn = NULL;

    newn = new SinglyCLLnode<T>(no);

    if(this->first == NULL && this->last == NULL) 
    {
        this->first = newn;
        this->last = newn;

        this->last->next = this->first;
    }
    else
    {
        this->last->next = newn;
        this->last = newn;

        this->last->next = this->first;
    }

    this->iCount++;
}

template <class T>
void SinglyCLL<T>::DeleteFirst()
{
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete first;

        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        this->first = this->first -> next;
        delete this->last->next;

        this->last->next = this->first;
    }
    this->iCount--;
}

template <class T>
void SinglyCLL<T>::DeleteLast()
{
    SinglyCLLnode<T> * temp = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete this->first;

        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        temp = this->first;

        while(temp -> next != this->last)
        {
            temp = temp -> next;
        }

        delete this->last;
        this->last = temp;

        this->last->next =this-> first;
    }
    this->iCount--;
}

template <class T>
void SinglyCLL<T>::Display()
{
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }

    SinglyCLLnode<T> * temp = this->first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp -> next;
    } while (temp != this->last ->next);
    
    cout<<"\n";
}

template <class T>
int SinglyCLL<T>::Count()
{
    return this->iCount;
}

template <class T>
void SinglyCLL<T>::DeleteAtPos(int pos)
{
    SinglyCLLnode<T> * temp = NULL;
    SinglyCLLnode<T> * target = NULL;
    
    int iCnt = 0;
    
    if(pos < 1 || pos > this->iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        this->DeleteFirst();
    }
    else if(pos == this->iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp->next = target->next;
        delete target;

        this->iCount--;
    }
}

template <class T>
void SinglyCLL<T>::InsertAtPos(T no, int pos)
{
    SinglyCLLnode<T> * temp = NULL;
    SinglyCLLnode<T> * newn = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > this->iCount+1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    else if(pos == this->iCount+1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new SinglyCLLnode<T>(no);

        temp = this->first;

        for(iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp->next = newn;

        this->iCount++;
    }
}

///////////////////////////////////////////////////////////////////////
//          Doubly Circular LinkedList using Generic Approach
///////////////////////////////////////////////////////////////////////

#pragma pack(1)
template <class T>
class DoublyCLLnode
{
    public:
        T data;
        DoublyCLLnode *next;
        DoublyCLLnode *prev;
        
    DoublyCLLnode(T no)
    {
        this->data=no;
        this->next=NULL;
        this->prev=NULL;
    }
};

template <class T>
class DoublyCLL
{
    private:
        DoublyCLLnode<T> *first;
        DoublyCLLnode<T> *last;
        int iCount;

    public:
        DoublyCLL();
        
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
       
        void Display();
        int Count();
        
};

template <class T>
DoublyCLL<T> :: DoublyCLL()
{
    cout<<"Linked List gets created.\n";
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template <class T>
void DoublyCLL<T> :: InsertFirst(T no)
{
    DoublyCLLnode<T> *newn = NULL;
    
    newn = new DoublyCLLnode<T>(no);
    
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;
    
    if((this->first == NULL) && (this->last == NULL) )
    {
        this->first=newn;
        this->last=newn;
    }
    
    else
    {
        newn->next=this->first;
        this->first->prev = newn;
        this->first = newn;
    }
    
    this->last->next = this->first;
    this->first->prev=this->last;
    
        this->iCount++;
}

template <class T>
void DoublyCLL<T> :: InsertLast(T no)
{
    DoublyCLLnode<T> *newn = NULL;
    
    newn = new DoublyCLLnode<T>(no);
    
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;
    
    if((this->first == NULL) && (this->last == NULL) )
    {
        this->first=newn;
        this->last=newn;
    }
    
    else
    {
        this->last->next=newn;
        newn->prev=this->last;
        this->last=newn;
    }
    
    this -> last -> next = this -> first;
    this -> first -> prev = this -> last;
    
    this->iCount++;
}

template <class T>
void  DoublyCLL<T> ::InsertAtPos(T no, int pos)
{
    DoublyCLLnode<T> *temp = NULL;
    DoublyCLLnode<T> *newn = NULL;
    
    int iCnt = 0;
    
    if((pos < 1) || (pos > this -> iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }
    
    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    
    else if(pos == this -> iCount+1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new DoublyCLLnode<T>(no);
         
        temp=this->first;
        
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        
        newn->next = temp->next;
        newn->next->prev=newn;
        
        temp->next=newn;
        newn->prev=temp;
        
        this->iCount++;
    }
    
}

template <class T>
void DoublyCLL<T>:: DeleteFirst()
{
    if(this->first == NULL && this->last == NULL) 
    {
        return;
    }
    else if(this->first == this->last)    
    {
        delete(this->first);
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        this->first=this->first->next;
        delete(this->first->prev);
        
        this->last->next = this->first;
        this->first->prev=this->last;
    }
    this->iCount--;
}

template <class T>
void DoublyCLL<T> :: DeleteLast()
{
        if(this->first == NULL && this->last == NULL) 
    {
        return;
    }
    else if(this->first == this->last)   
    {
        delete(this->first);
        this->first = NULL;
        this->last = NULL;
    }
    else
    {
        this->last=this->last->prev;
        delete(this->last->next);
        
        this->last->next = this->first;
        this->first->prev=this->last;
        
    }
    this->iCount--;
}

template <class T>
void DoublyCLL<T> :: DeleteAtPos(int pos)
{
    DoublyCLLnode<T> *temp = NULL;
    
    int iCnt = 0;
    
    if((pos<1) || (pos>this->iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }
    
    if(pos==1)
    {
        DeleteFirst();
    }
    
    else if(pos==this->iCount)
    {
        DeleteLast();
    }
    else
    {
        
        temp=this->first;
        
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        
        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev=temp;
        
        this->iCount--;
    }
}

template <class T>
void DoublyCLL<T> :: Display()
{
    DoublyCLLnode<T> *temp=NULL;
    
    if(first == NULL && last == NULL) 
    {
        cout<<"Linked List is empty\n";
        return;
    }

    temp=first;
    
    cout<<" <=> ";
    
    do
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp-> next;
    }while(temp != this->first);
    
    cout<<"\n";
}

template <class T>
int DoublyCLL<T> :: Count()
{
    return this->iCount;
}

////////////////////////////////END OF LIBRARY///////////////////////////////////////

int main()
{
    
    return 0;
}
