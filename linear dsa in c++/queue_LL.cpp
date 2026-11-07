#include<bits/stdc++.h>
using namespace std;


struct node
{
    public:
    int data;
    struct node*next;
    public:
    node(int data1,node* next1)
    {
        data = data1;
        next = next1;
    }
    public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    
    }


};

class queue
{
    node* front;node* rear;
    int size = 0;
    void enqueue(int x)
    {
        node *temp = new node(x);
        if(front == NULL)
        {
           front = rear;
           front = temp;
        }
        else
        {
            rear->next = temp;
        }
        size++;

    }
    void dequeue()
    {
        if(front == NULL) 
        {
            cout<<"underflow condition"<<endl;
        }
        else
        {
            node* temp = front;
            front = front->next;
            cout<<"the dequeued element is : "<<temp->data<<endl;
            delete temp;
            size--;
        }

    }
    int top()
    {
        if(front == NULL)
        {
            cout<<"underflow condition"<<endl;
            return NULL;
        }
        else
        {
            node*temp = front;
            return temp->data;


        }
    }
};


