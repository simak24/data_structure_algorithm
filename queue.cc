#include<bits/stdc++.h>
using namespace std;
#define max 3
int myQ[max];
int frnt=-1;
int rear=-1;
void enque(int item)
{
    if(frnt==0&&rear==max-1)
    {
        cout<<"Your queue is full\n";
    }
    else if(frnt==-1&&rear==-1)
    {
        frnt=0;
        rear=0;
        myQ[rear]=item;
        cout<<"Your queue is updated\n";
    }
    else
    {
        myQ[++rear]=item;
        cout<<"Your queue is updated\n";
    }
}

void dque()
{
    if(frnt==-1||rear==-1)
    {
        cout<<"Your queue is empty\n";
    }
    else
    {
        cout<<"deque item is :"<<myQ[frnt]<<"\n";
        for(int i=0; i<=rear; i++)
        {
            myQ[i]=myQ[i+1];
        }
        rear--;
    }

}

void display()
{
    if(frnt==-1||rear==-1)
    {
        cout<<"Your Queue is empty\n";
    }
    else
    {
        for(int i=0; i<=rear; i++)
        {
            cout<<myQ[i]<<" ";
        }
        cout<<"\n";
    }
}


int main()
{
    int choice;
    while(true)
    {
        cout<<"Select 1 for enque\n";
        cout<<"Select 2 for deque\n";
        cout<<"Select 3 for display\n";
        cout<<"Select 4 for exit\n";
        cin>>choice;

        switch(choice)
        {
        case 1:
            int item;
            cout<<"Enque your item :";
            cin>>item;
            enque(item);
            break;
        case 2:
            dque();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            cout<<"Your input is wrong\n";
        }
    }

    return 0;
}
