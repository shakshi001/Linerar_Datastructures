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

node* convertarrtoll(vector<int>&arr)
{
    node* head = new node(arr[0],nullptr);
    node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp = new node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }

    return head;
}
node* insertnode(node* head,int value)
{
    node* temp = new node(value,head);
    return temp;
}
node* printvalue(node* head)
{
    node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" "<<endl;
        temp = temp->next;
    }
}

int main()
{
    int value;
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    cout<<"enter the value"<<endl;
    cin>>value;
    node* head = convertarrtoll(arr);
    head = insertnode(head,value);
    printvalue(head);
    return 0;
}

