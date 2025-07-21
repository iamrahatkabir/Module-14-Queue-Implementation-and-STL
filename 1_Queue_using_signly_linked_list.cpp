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
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};


class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;

    int sz = 0;

    void push(int val)
    {
        sz++;

        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void pop()
    {

        sz--;

        Node* deletenode = head;
        head = head->next;
        delete deletenode;

        if(head == NULL) //Corner case
        {
            tail = NULL;
        }
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val; 
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        // if(head == NULL)
        //     return true;
        // else
        //     return false;

        return head == NULL;

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