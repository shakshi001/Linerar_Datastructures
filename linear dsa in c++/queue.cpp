#include<bits/stdc++.h>
using namespace std;



class queue
{
    int queue[10], front = -1,rear = -1;
    void enqueue(int x)
    {
        if((front+1)%10 == rear)
        {
            cout<<"overflow condition"<<endl;
        }
        else if(front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            queue[rear] = x;
        }
        else
        {
            rear = (rear+1)%10;
            queue[rear] = x;
        }
    }

    void dequeue()
    {
        if(front==rear)
        {
           cout<<"the dequeued element is : "<<queue[front];
           front = -1;
           rear = -1;
        }
        else if(front == -1 && rear == -1)
        {
            cout<<"underflow condition"<<endl;
        }
        else
        {
            cout<<"the dequeued element : "<<endl;
            front = (front+1)%10;
        }

    }
    int size()
    {
        return rear+1;
    }
    int top()
    {
        if(front == -1 && rear == -1)
        {
            cout<<"underflow condition"<<endl;
        }
        else
        {
            cout<<"the top element is "<<queue[front];
        }
    }
};
