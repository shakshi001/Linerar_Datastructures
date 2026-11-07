#include <bits/stdc++.h>
using namespace std;

struct node
{
public:
    int data;
    struct node *next;

public:
    node(int data1, struct node *next1)
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

class stack
{
    struct node *top;
    int size = 0;
    void push(int x)
    {
        node *temp = new node(x);
        temp->next = top;
        top = temp;
        size = size +1;
    }
    void pop()
    {
        node*temp = top;
        cout<<"the dequeued element is : "<<temp->data<<endl;
        top = top->next;
        delete temp;
        size = size -1;
    }
    int top()
    {
        return top->data;
    }
    int size()
    {
        return size;
    }
};
