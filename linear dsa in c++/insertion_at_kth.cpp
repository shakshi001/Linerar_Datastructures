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


node* insert_at_kth_position(node*head,int elem,int k)
{
    if(head==NULL)
    {
        if(k==1)
        {
           return new node(elem,NULL);
        }
        else
        {
            return NULL;
        }
    }
    int cnt =0;
    node*temp = head;
    while(temp)
    {
        cnt++;
        if(cnt == k-1)
        {  
            node* new_node = new node(elem,NULL);
            new_node->next = temp->next;
            temp->next = new_node;
            break;
        }
        temp = temp->next;
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
    int value,pos;
    cout<<"enter the value"<<endl;
    cin>>value;
    cout<<"enter position"<<endl;
    cin>>pos;
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    node* head = convertArrtoLL(arr);
    //head = insert_at_tail(head,value);
    insert_at_kth_position(head, value,pos);
    printvalue(head);
    return 0;
}


// time complexity -> o(n)