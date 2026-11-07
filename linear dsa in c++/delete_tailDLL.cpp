// Delete the tail of the doubly Linked list

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
node* convertArrLL(vector<int>arr)
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

node* delete_the_tailDLL(node* head)
{
    if(head ==NULL || head->next == NULL) return NULL;
    node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }

    node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
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
    vector<int>arr = {1,2,3,4,5,};
    node* head = convertArrLL(arr);
    head = delete_the_tailDLL(head);
    printvalue(head);
    return 0;
}
