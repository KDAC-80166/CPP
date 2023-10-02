# define SIZE 5
# include<iostream>
using namespace std;
class stack
{
private: 
   int top;
   int size;
   int *arr;
public:
    stack(int sz)
    {
        this->top=-1;
        if(sz!=0)
        {
            this->arr=new int[sz];
            this->size=sz;

        }
        else
        {
            this->arr=new int[SIZE];
            this->size=5;

        }
    } 
    void push(int val)
    {
        if(this->top==(this->size)-1)
        cout<<"Stack is full"<<endl;
        else
        {
          this->top++;
          this->arr[top]=val;
        }
    }
    void pop()
    {
      if(this->top==-1)
      cout<<"Stack is empty"<<endl;
      else
      {
        this->arr[top]==0;
        top--;
      }
     
    }
    void peek()
    {
        if(this->top==-1)
        cout<<"stack is empty"<<endl;
        else
        {
         cout<<"peeked value is="<<arr[top]<<endl;
        }
    }
    void isEmpty()
    {
        if(this->top==-1)
        cout<<"stack is empty"<<endl;
        else
        cout<<"stack is not empty"<<endl;
    
        
    }
    void isFull()
    {
        if(this->top==(this->size)-1)
        cout<<"stack is full"<<endl;
        else
        cout<<"stack is empty"<<endl;
    }
    void destroy()
    {
        delete this->arr;
    
        this->arr = NULL;
        
    }
};
int menu()
{
    int choice;
    cout<<"************************************************************"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.PUSH"<<endl;
    cout<<"2.POP"<<endl;
    cout<<"3.PEEK"<<endl;
    cout<<"4.stack isEmpty"<<endl;
    cout<<"5.stack isFull"<<endl;
    cin>>choice;
    cout<<"**************************************************************"<<endl;
    return choice;

}
int main()
{
    int choice,val;
    stack s(6);
    int sz;
    cout<<"Enter the size of stack=";
    cin>>sz;

    while((choice=menu())!=0)
    {
        switch(choice)
        {
            case 1:
            {
            cout<<"Enter value to be pushed";
            cin>>val;
            s.push(val);
            break;
            }
            case 2:
            s.pop();
            break;
            case 3:
            s.peek();
            break;
            case 4:
            s.isEmpty();
            break;
            case 5:
            s.isFull();
            break;
            default:
            cout<<"you enter the wrong choice"<<endl;
        }
    }
    s.destroy();
return 0;

    }
