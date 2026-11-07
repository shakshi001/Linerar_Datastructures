//before
#include<bits/stdc++.h>
using namespace std;

struct node
{
    public:
    int data;
    node*next;
    node*back;
    public:
    node(int data1,struct node*next1,struct node*back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    node(int data1)
    {
        int data = data1;
        next = nullptr;
        back = nullptr;
    }
};

node*convertArrtoDLL(vector<int>arr)
{
    node*head = new node(arr[0]);
    node*prev = head;
    for(int i=0;i<arr.size();i++)
    {
        node*temp = new node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;

    }
    return head;
}

void print_DLL(struct node*head)
{
    node *temp = head;
    while(temp != NULL)
    {
       cout<<temp->data<<" "<<endl;
       temp = temp->next;
    }

}
node* delete_head_DLL(node*head)
{
    node* temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;

}
node* delete_tail_DLL(node*head)
{
    node* temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node* nextnode = temp->next;
    temp->next = nullptr;
    nextnode->back = nullptr;
    delete nextnode;
    return head;

}

node* delete_kth_position(node* head)
{
    int cnt = 0,pos;
    node* temp = head;
    cout<<"enter the position you want to delete : "<<endl;
    cin>>pos;
    if(pos<0)
    {
        cout<<"INVALID"<<endl;
    }

    while(temp)
    {
        cnt++;
        if(cnt == pos-1)
        {
            node* nextnode = temp->next;
            node* lastnode = nextnode->next;
            lastnode->back = temp;
            temp->next = nextnode->next;
            delete nextnode;
        return head;
        }
        temp = temp->next;
    }
    return head;

}
node* delete_the_specific_element(node* head)
{
    node* temp = head;node* nextnode;node* prev;node* lastnode;
    int x;
    cout<<"enter the element you want to delete"<<endl;
    cin>>x;
    while(temp)
    {
        if(temp->data == x)
        {
            nextnode = temp;

        }
        temp = temp->next;

    }

    prev = nextnode->back;
    prev->next = nextnode->next;
    lastnode = nextnode->next;
    lastnode->back = prev;
    delete nextnode;
    return head;
}

int main()
{
    vector<int>arr = {1,2,3,4,5,6,7,8};
    node *head = convertArrtoDLL(arr);
    head = delete_head_DLL(head);
    head = delete_tail_DLL(head);
    head = delete_kth_position(head);
    head = delete_the_specific_element(head);
    print_DLL(head);
}






















