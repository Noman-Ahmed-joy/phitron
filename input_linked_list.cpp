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
  print_link_list(head);
  return 0;
}