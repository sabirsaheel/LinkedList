#include<iostream>
#include<windows.h>// For System cls
#include<conio.h>// For getch
using namespace std;

struct Node
{
    int value;
    Node *next;
};
Node *head=NULL;
//Prototypes
bool isEmpty();
void push(int);
int pop();
int peek();
void printStack();
int inputValue();

int main()
{
    while(1)
    {
        system("cls");
        cout<<" Stack using Linked List by Sabir Saheel ID:1710821 "<<endl;
        cout<<" 1. Push a number into the Stack "<<endl;
        cout<<" 2. Pop a number from the Stack "<<endl;
        cout<<" 3. Exit "<<endl;
        cout<<endl;
        cout<<" ***Stack***"<<endl;
        printStack();
        cout<<endl<<" Enter a Number from 1-3 : ";
        int n;
        cin>>n;
        switch(n)
        {
            case 1: push(inputValue());
                    cout<<" A Number has been successfully Pushed into the Stack "<<endl;
                    cout<<" Current state of Stack "<<endl;
                    printStack();
                    break;

            case 2: pop();
                    cout<<" A Number has been successfully Popped from the Stack "<<endl;
                    cout<<" Current state of Stack "<<endl;
                    printStack();
                    break;

            case 3: return 0;

           default: cout<<" Invalid Input "<<endl;
        }
        cout<<endl<<" Press any key to continue... ";
        getch();

    }
}

bool isEmpty()
{
    if(head==NULL)
        return true;
    else
        return false;
}
void push(int v)
{
    Node *n=new Node;
    n->value=v;
    n->next=head;
    head=n;
}
int pop()// How to return the deleted value.
{
    if(isEmpty())
        cout<<" Stack is Empty "<<endl;
    else
    {
        Node *p=head;
        head=head->next;
        return p->value;
    }
}
int peek()
{
    if(head!=NULL)
    {
        return head->value;
    }
    else
    {
        cout << "Stack is empty!" << endl;
        return -1;
    }
}
void printStack()
{
    if(isEmpty())
        cout<<" Stack is Empty "<<endl;
    else
    {
        cout<<endl;
        cout<<" |   | "<<endl;
        Node *p=head;
        while(p!=NULL)
        {
            cout<<" | "<<p->value<<" | "<<endl;
            p=p->next;
        }
        cout<<"  --- "<<endl;
    }
}
int inputValue()
{
    int v;
    cout<<" Enter a Value : ";
    cin>>v;
    return v;
}
