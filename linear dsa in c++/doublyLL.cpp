//DOUBLY LINKED LIST : travel in both direction 

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
    node* head = new node(arr[0],nullptr,nullptr);
    node* prev = head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp = new node(arr[i],nullptr,nullptr);
        prev->next = temp;
        prev = temp;
    }
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
    node* head = convertArrtoLL(arr);
    printvalue(head);
    return 0;
}
