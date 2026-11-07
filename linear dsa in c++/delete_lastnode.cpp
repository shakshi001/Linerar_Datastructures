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

node* convertArr2LL(vector<int>arr)
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

node* delete_last_node(node* head)
{
    if(head == NULL) return NULL;
    if(head->next==NULL) return NULL;
    node* temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    return head;
}

node* printvalue(node* head)
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
    vector<int>arr = {1,2,3,4,5,6};
    node* head = convertArr2LL(arr);
    head = delete_last_node(head);
    printvalue(head);
    return 0;
}
