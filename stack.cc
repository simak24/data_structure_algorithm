#include<iostream>
using namespace std;
#define max 10

class Stack
{
    int top;
public:
    int ar[max];
    Stack()
    {
        top=-1;
    }
    int count=0;
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if(top>=max)
    {
        cout<<"Stack overflow"<<endl;
    }
    else
    {
        ar[++top]=x;
        cout<<"Data pushed into stack"<<endl;
        count++;
        return true;
    }
};
int Stack::pop()
{
    if(top<0)
    {
        cout<<"Stack is belowflow"<<endl;
    }
    else
    {
        int x=ar[top--];
        return x;
    }
}

int Stack::peek()
{
    if(top<0)
    {
        cout<<"Your stack id empty"<<endl;
    }
    else
    {
        int x=ar[top];
        return x;
    }
}

bool Stack::isEmpty(){

    return (top<0);

}

int main()
{
    Stack s;
    s.push(10);
    s.push(12);
    s.push(13);
    s.push(6);
    s.push(9);
    s.push(3);
    s.push(17);
    s.push(11);
    s.push(4);
    s.push(15);

    cout<<"\nTotal input = "<<s.count<<"\n"<<endl;
    while(!s.isEmpty())
    {
        cout<<s.peek()<<" ";
        s.pop();
    }



    return 0;
}
