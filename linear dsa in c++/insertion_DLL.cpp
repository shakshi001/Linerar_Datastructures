#include <bits/stdc++.h>
using namespace std;

struct node{

public:
    int data;
    struct node *next;
    struct node *back;

public:
    node(int data1, node *next1, node *back1)
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

struct node*convertArrtoDLL(vector<int>arr)
{
    node* head = new node(arr[0]);
    node* prev = head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp = new node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

struct node* insert_at_head_before(node*head)
{
    int x;
    cout<<"enter the data you want to insert"<<endl;
    cin>>x;
    node* newnode = new node(x);
    node* temp = head;
    head = newnode;
    newnode->next = temp;
    temp->back = newnode;
    return head;

}
struct node* insert_at_head_after(node* head)
{
    int x;
    cout<<"enter the data : "<<endl;
    cin>>x;
    node* temp = head;
    node* newnode = new node(x,temp->next,temp);
    node* prev = temp->next;
    temp->next = newnode;
    prev->back = newnode;
    return head;

}
struct node*insert_at_tail_before(node*head)
{
    int x;
    cout<<"enter the data you want to insert :  "<<endl;
    cin>>x;
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    node* prev = temp->back;
    node*newnode = new node(x,temp,prev);
    prev->next = newnode;
    temp->back = newnode;
    return head;
}
struct node* insertion_after_the_tail(node* head)
{
    int x;
    cout<<"enter the data"<<endl;
    cin>>x;
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    node* newnode = new node(x,nullptr,temp);
    temp->next = newnode;
    return head;
}
struct node* inserting_before_the_kth_element(node* head)
{
    int x,pos;
    cout<<"enter the data"<<endl;
    cin>>x;
    cout<<"enter the position"<<endl;
    cin>>pos;
    int cnt = 1;node*temp = head;
    while(temp->next != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    cout<<"lenght of linked list : "<<cnt<<endl;
    if(pos<0 || pos>cnt)
    {
        cout<<"cannot insert"<<endl;
        return NULL;
    }
    else
    {
        temp = head;
        cnt =1;
        while(temp->next != NULL)
        {
            cnt++;
           if(cnt == pos)
           {
              break;
           }
           temp = temp->next;
        }
        node* nextnode = temp->next;
        node* newnode = new node(x,nextnode,temp);
        temp->next = newnode;
        nextnode->back = newnode;
        return head;
    }

    
}
struct node* inserting_after_the_kth_element(node* head)
{
    int x,pos;
    cout<<"enter the data"<<endl;
    cin>>x;
    cout<<"enter the position"<<endl;
    cin>>pos;
    node* temp = head;
    int cnt = 1;
    while(temp->next != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    cout<<"the length of the linked list "<<cnt<<endl;
    if(pos<0 || pos>cnt)
    {
        cout<<"you cannot insert"<<endl;
        return NULL;
    }
    else
    {
        temp = head;
        cnt = 1;
        while(temp->next!= NULL)
        {
            cnt++;
            if(cnt == (pos+1))
            {
                break;
            }
        }
        node*prev = temp->back;
        node* newnode = new node(x,temp,prev);
        prev->next = newnode;
        temp->back = newnode;
        return head;
    }

}
void print_LL(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" "<<endl;
        temp = temp->next;
    }
}
int main()
{
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    node* head = convertArrtoDLL(arr);
    //head = insert_at_head(head);
    //head = insert_at_tail_before(head);
    //head = insertion_after_the_tail(head);
    //head = insert_at_head_after(head);
    //head = inserting_before_the_kth_element(head);
    head = inserting_after_the_kth_element(head);
    print_LL(head);
    return 0;
}

































































