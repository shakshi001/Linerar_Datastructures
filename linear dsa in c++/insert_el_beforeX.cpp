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

node* insert_element_before_the_value(node* head,int elem, int value)
{
    if(head == NULL) return NULL;
    if(head->data == value) return new node(elem,head);
    node* temp = head;
    while(temp->next != NULL)
    {
        if(temp->next->data == value)
        {
            node* temp_val = new node(elem,temp->next);
            temp->next = temp_val;
            break;
        }
    }
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
    int value,elem;
    cout<<"enter the value"<<endl;
    cin>>value;
    cout<<"enter position"<<endl;
    cin>>elem;
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    node* head = convertArrtoLL(arr);
    //head = insert_at_tail(head,value);
    //insert_at_kth_position(head, value,pos);
    insert_element_before_the_value(head,elem, value);
    printvalue(head);
    return 0;
}









