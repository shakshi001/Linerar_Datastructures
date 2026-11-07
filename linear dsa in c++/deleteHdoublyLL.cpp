// delete the doubly linked list head

#include<bits/stdc++.h>
using namespace std;

struct node
{
    public:
    int data;
    node* next;
    node* back;
    public:
    node(int data1,node* next1,node* back1)
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

node* convertArrtoLL(vector<int>arr)
{
    node* head = new node(arr[0]);
    node* prev = head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp = new node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

node* delete_head_node(node* head)
{
    if(head == NULL) return NULL;
    if(head->next == NULL) return NULL;
    node* prev = head;
    head = head->next;
    prev->next = nullptr;
    head->back = nullptr;
    delete prev;
    return head;
}

void printvalue(node* head)
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
    vector<int>arr = {9,8,7,6,5,4,3,2,1};
    node* head = convertArrtoLL(arr);
    head = delete_head_node(head);
    printvalue(head);
    return 0;
}