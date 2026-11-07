#include<bits/stdc++.h>
using namespace std;

struct node
{
    public:
    int data; 
    struct node*next;
    struct node*back;
    public:
    node(int data1,struct node* next1,struct node* back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

struct node* inserting_after(node* head)
{
    int node,x;
    struct node*temp;
    cout<<"enter the node"<<endl;
    cin>>node;
    cout<<"enter the element"<<endl;
    cin>>x;
    temp = head;
    while(temp)
    {
        if(temp->data == node)
        {
            break;
        }
        temp = temp->next;
    }
    struct node* nextnode = temp->next;
    struct node* newnode = new struct node(x,nextnode,temp);
    temp->next = newnode;
    nextnode->back = newnode;
    return head;

}
struct node* inserting_before(node* head)
{
    int node,x;
    cout<<"enter the node"<<endl;
    cin>>node;
    cout<<"enter the element"<<endl;
    cin>>x;
    struct node*temp = head;
    while(temp)
    {
        if(temp->data == node)
        {
            break;
        }
        temp = temp->next;
    }
    struct node*prevnode = temp->back;
    struct node*newnode = new struct node(x,temp,prevnode);
    prevnode->next = newnode;
    temp->back = newnode;
    return head;
}
node* convertArrtoLL(vector<int>arr)
{
    node* head = new node(arr[0]);
    node*prev = head;
    for(int i=1;i<arr.size();i++)
    {
        node *temp = new node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void print_LL(node* head)
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
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    node* head = convertArrtoLL(arr);
    //head = inserting_after(head);
    head = inserting_before(head);
    print_LL(head);
    return 0;

}
