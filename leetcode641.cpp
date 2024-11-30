#include<bits/stdc++.h>
using namespace std;

class MyCircularDeque
{

    list<int> lst;
    int k;

public:
    MyCircularDeque(int k)
    {
        lst.resize(0);
        this->k = k;
    }

    bool insertFront(int value)
    {
        if (lst.size() < k)
        {
            lst.push_front(value);
            return true;
        }
        return false;
    }

    bool insertLast(int value)
    {
        if (lst.size() < k)
        {
            lst.push_back(value);
            return true;
        }
        return false;
    }

    bool deleteFront()
    {
        if (lst.size() > 0)
        {
            lst.pop_front();
            return true;
        }
        return false;
    }

    bool deleteLast()
    {
        if (lst.size() > 0)
        {
            lst.pop_back();
            return true;
        }
        return false;
    }

    int getFront()
    {
        if (lst.size())
            return lst.front();
        return -1;
    }

    int getRear()
    {
        if (lst.size())
            return lst.back();
        return -1;
    }

    bool isEmpty()
    {
        return lst.empty();
    }

    bool isFull()
    {
        return lst.size() == k;
    }
};

