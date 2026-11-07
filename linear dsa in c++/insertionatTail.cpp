#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*next;
    node(int data1,node* next1)
    {
        data = data1;
        next = next1;
    }
};

node* convertArrtoLL(vector<int>arr)
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
node* insert_at_tail(node* head,int value)
{
    node* temp = head;
    if(head == NULL)
    {
        return new node(value,NULL);
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    node* temp_val = new node(value,NULL);
    temp->next = temp_val;
    return head;
}
node* print_value(node* head)
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
    cout<<"enter the value"<<endl;
    cin>>value;
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    node* head = convertArrtoLL(arr);
    head = insert_at_tail(head,value);
    print_value(head);
    return 0;
}