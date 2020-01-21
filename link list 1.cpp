#include<bits/stdc++.h>
using namespace std;

 struct mylist
{
    int data;
     mylist *next;
} ;
void insert(mylist *s,int data)
{
    while(s->next!=NULL)
    {
        s=s->next;
    }
    s->next=new mylist;
    s->next->data=data;
    s->next->next=NULL;
}
void display(mylist *s)
{
    while(s->next !=NULL)
    {
        cout<<s->next->data<<endl;
        s=s->next;
    }

}
void search(mylist *s,int search)
{
    int count=0;
    while(s->next !=NULL)
    {
        if(s->next->data==search)
        {
            count++;
        }
        s=s->next;
    }
    cout<<"count:"<<count<<endl;

}
int deletedata(mylist *s,int data)
{
    while(s->next!=NULL)
    {
        if(s->next->data==data)
        {
            s->next=s->next->next;
            return 0;
        }
        s=s->next;

    }
    cout<<data<<" is deleted"<<endl;
}
int main()
{
    mylist *node=new mylist;

   // node *first=new node;
    node->next-NULL;
    insert(node,7);
    insert(node,8);
    insert(node,8);
    insert(node,10);
    display(node);
    search(node,8);
    deletedata(node,10);
    display(node);
}



