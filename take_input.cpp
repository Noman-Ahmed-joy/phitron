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
        this->prev=NULL;
    }
};
void insert_tail(node *&head, node *&tail, int val)
{
    node *newNode = new node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void print_normal(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(node *tail)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
  node* head = NULL;
  node* tail= NULL;
  int val;
  while(true)
  {
    cin>>val;
    if(val==-1)
        break;
        insert(head,tail,val);
  }
  print_normal(head);
  print_reverse(tail);
  return 0;
}