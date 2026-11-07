#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node(int data1,node* next1)
    {
        data = data1;
        next = next1;
    }
};

node* convertarrtoLL(vector<int>arr)
{
    node* head = new node(arr[0],nullptr);
    node* mover = head;
    for(int i=0;i<arr.size();i++)
    {
        node* temp = new node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
}

node* delete_the_value(node* head,int value)
{
    if(head == NULL) return NULL;
    if(head->data==value)
    {
        node* temp = head;
        head =  head->next;
        delete temp;
        return head;
    }
    node* prev = NULL;node* temp = head;
    while(temp)
    {
        if(temp->data == value)
        {
           prev->next = prev->next->next;
           delete temp;
           break; 
        }
        prev = temp;
        temp = temp->next;
    }

}

node *printvalue(node* head)
{
    node* temp = head;
    while(temp)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}


int main()
{
    int value;
    vector<int>arr = {2,3,4,5,6,7,8,9};
    node* head = convertarrtoLL(arr);
    cout<<"enter the value "<<endl;
    cin>>value;
    head = delete_the_value(head,value);
    printvalue(head);
}