#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_link_list(node* head)
{
  node* tmp =head;
  while(tmp!=NULL)
  {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
  } 
}

void insert_at_tail(node *&head, node *&tail, int val) // time complexity O(1)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
  node* head = NULL;
  node* tail = NULL;
  int val;
  while(true)
  {
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head,tail,val);
  }

  for(node* i=head;i->next!=NULL;i=i->next)
  {
    for(node* j=i->next;j!=NULL;j=j->next)
    {
        if(i->val>j->val)
        {
            swap(i->val,j->val);
        }
    }
  }
  print_link_list(head);
  return 0;
}