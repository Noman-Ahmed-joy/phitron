#include <bits/stdc++.h>
using namespace std;
int main()
{
    // MAX Heap
    priority_queue<int> pq;
    
    // MIN HEAP
    // priority_queue<int, vector<int>, greater<>> pq;
    while (true)
    {
        int command;
        cin >> command;
        if (command == 0) // INSERT
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN)
        }
        else if (command == 1) // DELETE
        {
            pq.pop(); // O(logN)
        }
        else if (command == 2) // TOP VALUE
        {
            cout << pq.top() << endl; // O(1)
        }
        else
            break;
    }
    return 0;
}