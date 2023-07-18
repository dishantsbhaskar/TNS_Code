#include <iostream>
#define SIZE 10
using namespace std;

class Stack
{
    int data[SIZE];
    int top;
    
    public:
    Stack()
    {
        top=-1;
    }
    void push(int element)
    {    
        if (isFull ()==1)
            cout<<"Stack Is Full";
        else
            data[++top]=element;
    }
    int pop()
    {
        if(isEmpty()==1)
            return -1;
        else
            return data[top --];
    }
    int isEmpty()
    {
        if (top==-1)
            return 1;
        else
            return 0;
    }
    int isFull()
    {
       if (top==SIZE -1)
            return 1;
        else
            return 0;
    }
    int peek()
    {
        if (isEmpty()==1)
            return -1;
        else
            return data [top];
    }
    
};

int main()
{
    cout<<"Static Implementation of Stack\n";
    Stack st;
    st.push(10);
    st.push(20);
    
    cout<<"\nStack Is Empty " <<st.isEmpty();
    
    cout<<"\nStack Is Full " <<st.isFull();
    
    cout<<"\nElement IS Top Position    :" << st.peek();
    cout<<"\nElement Removed From Stack :" <<st.pop();
    cout<<"\nElement Removed From Stack :" <<st.pop();
    cout<<"\nElement Removed From Stack :" <<st.pop();
    
    return 0;
}


/*
Output:
Static Implementation of Stack

Stack Is Empty 0
Stack Is Full 0
Element IS Top Position    :20
Element Removed From Stack :20
Element Removed From Stack :10
Element Removed From Stack :-1
*/
