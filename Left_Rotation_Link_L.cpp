#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
};

node*start=NULL;
node*ptr,*n;

void create(int d)
{
    n=new node;
    n->data=d;
    n->next=NULL;
    if(start==NULL)
    {
        start=n;
        ptr=n;
        return;
    }
    ptr->next=n;
    ptr=n;
}

int main()
{
    int n,d;
    cin>>n>>d;
    int key;
    for(int i=0;i<n;i++)
    {
        cin>>key;
        create(key);
    }
    ptr=start;
    for(int i=0;i<n-1;i++)
    {
        ptr=ptr->next;
    }
    ptr->next=start;
    ptr=start;
    for(int i=0;i<d-1;i++)
    {
        ptr=ptr->next;
    }
    start=ptr->next;
    ptr->next=NULL;
    ptr=start;
    for(int i=0;i<n;i++)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }


}
