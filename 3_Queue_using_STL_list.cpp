#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


class myQueue
{
    public:
    list<int> l; 
    int sz = 0;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {

        l.pop_front(); //Delete the first value;
    }

    int front()
    {
        return l.front();
    }

    int back()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        // if(head == NULL)
        //     return true;
        // else
        //     return false;

        return l.empty();

    }

};


int main()
{
    myQueue q;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        q.push(val);
    }

    // cout << q.front() << " " << q.back() << " " << q.size() << endl;

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}