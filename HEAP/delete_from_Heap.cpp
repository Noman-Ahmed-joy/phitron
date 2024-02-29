#include <bits/stdc++.h>
using namespace std;
// Insert MAX_HEap
void insert_heap(vector<int> &v, int x)
{
  v.push_back(x);
  int cur_idx = v.size() - 1;
  while (cur_idx != 0) // Complexity--> O(logN)
  {
    int parent_idx = (cur_idx - 1) / 2;
    if (v[parent_idx] < v[cur_idx])
      swap(v[parent_idx], v[cur_idx]);
    else
      break;
    cur_idx = parent_idx;
  }
}

// DELETE SCOPE
void delete_heap(vector<int> &v)  //Complexity --> O(logN)
{
  v[0] = v[v.size() - 1]; // Last Index k First e Rekhe dao
  v.pop_back();           // last Index k delete koire dao
  int curr = 0;
  while (true)
  {
    int left_idx = curr * 2 + 1;
    int right_idx = curr * 2 + 2;
    int last_idx = v.size() - 1;
    if (left_idx <= last_idx && right_idx <= last_idx)
    {
      // Duitai ache
      if (v[left_idx] >= v[right_idx] && v[left_idx] > v[curr])
      {
        swap(v[left_idx], v[curr]);
        curr = left_idx;
      }
      else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[curr])
      {
        swap(v[right_idx], v[curr]);
        curr = right_idx;
      }
      else
        break;
    }
    else if (left_idx <= last_idx)
    {
      // left ache
      if (v[left_idx] > v[curr])
      {
        swap(v[left_idx], v[curr]);
        curr = left_idx;
      }
      else
        break;
    }
    else if (right_idx <= last_idx)
    {
      // right ache
      if (v[right_idx] > v[curr])
      {
        swap(v[right_idx], v[curr]);
        curr = right_idx;
      }
      else
        break;
    }
    else
      break;
  }
}

//PRINT HEAP
void print_heap(vector<int> v)
{
  for (int val : v)
  {
    cout << val << " ";
  }
  cout<<endl;
}
int main()
{
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    insert_heap(v, x);
  }
  delete_heap(v);
  print_heap(v);
  return 0;
}