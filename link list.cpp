#include<bits/stdc++.h>
using namespace std;

typedef struct mylist
{
    int data;
    struct mylist *next;
} node ;
void insert(node *s,int data)
{
    while(s->next!=NULL)
    {
        s=s->next;
    }
    s->next=new node;
    s->next->data=data;
    s->next->next=NULL;
}
void display(node *s)
{
    while(s->next !=NULL)
    {
        cout<<s->next->data;
        s=s->next;
    }

}
void search(node *s,int search)
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

}
int main()
{
    node *first=new node;
    first->next-NULL;
    insert(first,7);
    display(first);
}


