#include<bits/stdc++.h>
using namespace std;

//push,pop,top,display,size
//stack->LIFO
//queue->FIFO
//enqueue,dequeue,
//stack<int>st ->st is variable name
//st.push(3)
//implementing stacks using  we have to known the size it has to be static it can't be dynamic 

class stacks
{
    int top = -1;
    int stack[10];
   void push(int x)
   {
     if(top>=10)
     {
        cout<<"overflow"<<endl;
     }
     else
     {
        top++;
        stack[top] = x;
     }
   }
   void pop()
   {
     if(top==-1)
     {
        cout<<"underflow"<<endl;
     }
     else
     {
        cout<<"the deleted element is "<<stack[top]<<endl;
        top--;
     }
   }
   int size()
   {
    return top+1;
   }
   void display()
   {
     for(int i=top;i>=0;i++)
     {
        cout<<stack[i]<<endl;
     }
   }
};


























































