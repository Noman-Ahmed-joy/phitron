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

void insert_at_tail(node *&head, int v)
{
    node *newNode = new node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhn last node e
    tmp->next = newNode;
}
void print_link_list(node *head)
{
    cout << endl;
    cout << "Your linked list:"
         << " ";
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
int main()
{
  int val;
  node* head = NULL;
  while (true)
  {
    cin>>val;
    if(val==-1)
    break;
    insert_at_tail(head,val);
  }
  print_link_list(head);
  return 0;
}