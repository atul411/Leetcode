#include<bits/stdc++.h>
using namespace std;

class MyHashMap
{
    vector<int> arr;

public:
    MyHashMap()
    {
        arr.resize(1e6 + 1, -1);
    }

    void put(int key, int value)
    {
        arr[key] = value;
    }

    int get(int key)
    {
        return arr[key];
    }

    void remove(int key)
    {
        arr[key] = -1;
    }
};