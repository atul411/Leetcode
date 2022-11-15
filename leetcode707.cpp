#include <bits/stdc++.h>
using namespace std;

class MyLinkedList
{
    list<int> lst;

public:
    MyLinkedList()
    {
        lst.clear();
    }

    int get(int index)
    {
        auto a = lst.begin();
        if (index >= lst.size())
        {
            return -1;
        }
        advance(a, index);
        return *a;
    }

    void addAtHead(int val)
    {
        lst.push_front(val);
    }

    void addAtTail(int val)
    {
        lst.push_back(val);
    }

    void addAtIndex(int index, int val)
    {
        if (index > lst.size())
        {
            return;
        }
        auto a = lst.begin();
        advance(a, index);
        lst.insert(a, val);
    }

    void deleteAtIndex(int index)
    {
        if (index >= lst.size())
        {
            return;
        }
        auto a = lst.begin();
        advance(a, index);
        lst.erase(a);
    }
};