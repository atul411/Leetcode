#include<bits/stdc++.h>
using namespace std;

class MyHashSet
{
    vector<int> arr;

public:
    MyHashSet()
    {
        arr.resize(1e+6);
    }

    void add(int key)
    {
        arr[key] = 1;
    }

    void remove(int key)
    {
        arr[key] = 0;
    }

    bool contains(int key)
    {
        return arr[key];
    }
};

