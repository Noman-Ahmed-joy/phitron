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
// insert at any position
void insert_at_position(node *head, int pos, int v)
{
    node *newNode = new node(v);
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position" << pos << endl
         << endl;
}
// print link list
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
// insert at head

void insert_at_head(node *&head, int v)
{
    node *newNode = new node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "inserted at Head" << endl
         << endl;
}

// Delete from any position
void delete_from_position(node *head, int pos)
{
    node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << "Invalid Index" << endl
             << endl;
        return;
    }
    node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted position " << pos << endl
         << endl;
}
// DElete Head
void delete_head(node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head not available" << endl
             << endl;
    }
    node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted Head " << endl
         << endl;
}
//main function
int main()
{
    node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print the Link List" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Insert at Head" << endl;
        cout << "Option 5: Delete from Position" << endl;
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7: Terminate" << endl;

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
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter Value:";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
                delete_from_position(head, pos);
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}