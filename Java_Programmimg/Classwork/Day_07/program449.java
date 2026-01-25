//Complete Doubly Circular Linked List

class node
{
    public int data;
    public node next;
    public node prev;

    public node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyCL
{
    private node first;
    private node last;
    
    private int iCount;

    public DoublyCL()
    {
        System.out.println("Object of DoublyCL gets created.");
        
        this.first = null;
        this.last = null;
        
        this.iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;
        
        newn = new node(no);
        
        if((this.first == null)&&(this.last ==null))
        {
            this.first = newn;
            this.last = newn;
        }
        
        else
        {
            newn.next = this.first;
            this.first.prev = newn;
            this.first = newn;
        }
        
        this.last.next = this.first;
        this.first.prev = this.last;
        
        this.iCount++;
    }

    public void InsertLast(int no)
    {
        node newn = null;
        
        newn = new node(no);
        
        if((this.first == null)&&(this.last ==null))
        {
            this.first = newn;
            this.last = newn;
        }
        
        else
        {
           this.last.next = newn;
           newn.prev = this.last;
           this.last = newn;
        }
        
        this.last.next = this.first;
        this.first.prev = this.last;
        
        this.iCount++;

    }

    public void InsertAtPos(int no, int pos)
    {
        node temp = null;
        node newn = null;
        
        int iCnt = 0;
        
        if((pos<1) || (pos>this.iCount+1))
        {
            System.out.println("Invalid Position");
            return;
        }
        
        if(pos==1)
        {
            InsertFirst(no);
        }
            
        else if(pos==this.iCount+1)
        {
            InsertLast(no);
        }
        else
        {
            newn=new node(no);
            
            temp=this.first;
            
            for(iCnt=1;iCnt<pos-1;iCnt++)
            {
                temp=temp.next;
            }
            
            newn.next = temp.next;
            newn.next.prev=newn;
            
            temp.next=newn;
            newn.prev=temp;
            
            this.iCount++;
        }  
    }

    public void DeleteFirst()
    {
        if(this.first == null && this.last == null) // LL is empty
        {
            return;
        }
        else if(this.first == this.last)    // LL contains 1 node
        {
            this.first = null;
            this.last = null;
        }
        else
        {
            this.first=this.first.next;
            
            this.last.next = this.first;
            this.first.prev=this.last;
        }
        System.gc();
        this.iCount--;
    }
    
    public void DeleteLast()
    {
        if(this.first == null && this.last == null) // LL is empty
        {
            return;
        }
        else if(this.first == this.last)    // LL contains 1 node
        {
            this.first = null;
            this.last = null;
        }
        else
        {
           this.last = this.last.prev;
           
           this.last.next=this.first;
           this.first.prev=this.last;
           
        }
        System.gc();
        this.iCount--;
    }
    
    public void DeleteAtPos(int pos)
    {
        node temp = null;
       
        int iCnt = 0;
        
        if((pos<1) || (pos>this.iCount))
        {
            System.out.println("Invalid Position");
            return;
        }
        
        if(pos==1)
        {
            DeleteFirst();
        }
            
        else if(pos==this.iCount)
        {
            DeleteLast();
        }
        else
        {

            temp=this.first;
            
            for(iCnt=1;iCnt<pos-1;iCnt++)
            {
                temp=temp.next;
            }
            
            temp.next = temp.next.next;
            temp.next.prev=temp;
        
            System.gc();
            this.iCount--;
        }  
    }
    
    public void Display()
    {
        node temp = null;
        
        if(first == null && last == null ) //LL is empty
        {
            System.out.println("Linked List is empty");
            return;
        }
        
        temp = this.first;
        
        do
        {
            System.out.print("| <=> " +temp.data);
            
            temp = temp.next;
        }while(temp != this.last.next);
        
        System.out.println();
         
    }

    public int Count()
    {
        return this.iCount;
    }
}

class program449
{
    public static void main(String A[])
    {
        DoublyCL obj = null;
        int iRet = 0;

        obj = new DoublyCL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);

        obj.DeleteFirst();

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);

        obj.DeleteLast();

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);
       
        obj.InsertAtPos(105,4);

        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);
       
        obj.DeleteAtPos(4);
        
        obj.Display();

        iRet = obj.Count();

        System.out.println("Number of nodes are : "+iRet);
    
        // Important for memory deallocation 
        obj = null;
        System.gc();
    }
}