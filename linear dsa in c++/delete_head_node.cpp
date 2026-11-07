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
node* delete_head_node(node* head)
{
    if(head = NULL) return head;
    node* temp = head;
    head = head->next;
    delete temp;
    return head;
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
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    node* head = convertarrtoll(arr);
    node* head_1 = delete_head_node(head);
    printvalue(head_1);
    return 0;
}

