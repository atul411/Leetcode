#include "library.h"

class Solution
{
public:
    int minMutation(string start, string end, vector<string> &bank)
    {
        unordered_map<string, int> umap;
        umap[start]++;
        for (auto str : bank)
        {
            umap[str]++;
        }
        queue<int> que;
        for (int i = 0; i < 8; i++)
        {
            if (start[i] != end[i])
            {
                que.push(i);
            }
        }
        int ans = que.size();
        while (que.size())
        {
            int n = que.size();
            for (int i = 0; i < n; i++)
            {
                int index = que.front();
                que.pop();
                char chr = start[index];
                start[index] = end[index];
                if (umap.count(start) == 0)
                {
                    que.push(index);
                    start[index] = chr;
                }
            }
            if (que.size() == n)
            {
                return -1;
            }
        }
        return ans;
    }
};






int main(){
    Solution s;
    vector<string> arr;
    cout<<s.minMutation("AACCGGTT", "AACCGGTA", arr);
}