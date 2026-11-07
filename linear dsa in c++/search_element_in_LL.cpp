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

node* convertArrtoLL(vector<int>&arr)
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

node* Traversal_in_LL(node* head, int key)
{
    node* temp = head;
    while(temp)
    {
       if(key == temp->data)
       {
          cout<<"element is found"<<" "<<endl;
           break;

       }
       temp = temp->next;
    }
}

int main()
{
    int key;
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    cout<<"enter the value you want to find"<<endl;
    cin>>key;
    node* head = convertArrtoLL(arr);
    Traversal_in_LL(head,key);
}