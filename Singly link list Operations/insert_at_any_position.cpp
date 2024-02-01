#include <bits/stdc++.h>
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
        cout << "Inserted at head" << endl
             << endl;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhn last node e
    tmp->next = newNode;
    cout << "Inserted at tail" << endl
         << endl;
}
void insert_at_position(node *head, int pos, int v)
{
    node *newNode = new node(v);
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position" << pos << endl
         << endl;
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
    node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print the Link List" << endl;
        cout << "Option 3: Insert at any position:" << endl;
        cout << "Option 4: Terminate" << endl;

        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please Enter the Value:";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_link_list(head);
        }
        else if (op == 3)
        {
            int pos;
            cout << "Enter position:";
            cin >> pos;
            int v;
            cout << "Enter value:";
            cin >> v;
            insert_at_position(head,pos,v);
        }
        else if (op == 4)
        {
            break;
        }
    }
    return 0;
}