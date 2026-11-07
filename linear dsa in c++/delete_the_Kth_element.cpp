// How to delete the kth element in the node 

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

node* convertArr2LL(vector<int>arr)
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
node* delete_kth_element(node* head,int k)
{
    if(head == NULL) return NULL;
    if(k == 1)
    {
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int  count = 0;node* temp = head;node* prev = NULL;
    while(temp!= NULL)
    {
       
        count++;
        if(count == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;

}
node* printvalue(node* head)
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
    int k;
    vector<int>arr = {1,2,3,4,5,6};
    node* head = convertArr2LL(arr);
    cout<<"enter the value of k"<<endl;
    cin>>k;
    head = delete_kth_element(head,k);
    printvalue(head);
    return 0;
}
