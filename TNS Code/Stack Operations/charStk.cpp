#include <iostream>
#define SIZE 10
using namespace std;

class Stack{
    char data[SIZE];
    int top;
    
    public:
    Stack()
    {
        top=-1;
    }
    void push(int el){
        if (isFull()==1)
            cout<<"Stack is full !!!";
        else
            data[++top]=el;
    }
    
    int pop(){
        if (isEmpty()==1)
            return -1;
        else
            return data[top--];
    }
     int isEmpty(){
        if (top==-1)
            return 1;
        else
            return 0;
    }
    int isFull(){
        if (top==SIZE-1)
            return 1;
        else
            return 0;
    }
    int peek(){
        if (isEmpty()==1)
            return -1;
        return data[top];
    }
};
int main()
{
    cout<<"Static Implementation of Stack";
    Stack stk;
    stk.push('X');
    stk.push('Y');
    cout<<"\nStack is Empty ? "<<stk.isEmpty();
    cout<<"\nStack is Full ? "<<stk.isFull();
    cout<<"\nElement is at top position : "<<(char)stk.peek();
    cout<<"\nElement removed from Stack : "<<(char)stk.pop();
    cout<<"\nElement removed from Stack : "<<(char)stk.pop();
    cout<<"\nElement removed from Stack : "<<stk.pop();
    return 0;
}