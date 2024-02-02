#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node* prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->next=NULL;
    }
};
void insert(node* head,int pos,int val)
{
    node* newNode = new node(val);
    node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next; // 100->30
    tmp->next=newNode; // 20-> 100
    newNode->next->prev=newNode; // 100<- 30
    newNode->prev=tmp;//20<-100
}

void print_normal(node* head)
{
    node* tmp= head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void print_reverse(node* tail)
{
    node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int size(node* head)
{
    node* tmp=head;
    int c=0;
    while(tmp!=NULL)
    {
        c++;
        tmp=tmp->next;
    }
}

int main()
{
  node* head = new node(10);
  node* a=new node(20);
  node* b=new node(30);
  node* c= new node(40);
  node* tail=c;

  head->next=a;
  a->prev=head;
  a->next=b;
  b->prev=a;
  b->next=c;
  c->prev=b;
  
  int pos,val;
  cin>>pos>>val;
  if(pos>=size(head))
  {
    cout<<"Invalid"<<endl;
  }
  else
  insert(head,pos,val);

  print_normal(head);
  print_reverse(tail);
  return 0;
}