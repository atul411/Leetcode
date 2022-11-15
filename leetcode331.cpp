#include<bits/stdc++.h>
using namespace std;

struct Helper
{
    char a;
    bool leftCompleted, rightCompleted;
};

class Solution
{
public:
    bool isValidSerialization(string preorder)
    {
        if (preorder.size() == 1 and preorder[0] == '#')
            return true;
        stack<Helper> st;
        for (auto i : preorder)
        {
            if (i == ',' and st.empty())
                return false;
            if (i == ',')
                continue;
            if (i == '#')
            {
                if (st.empty())
                {
                    return false;
                }
                if (st.top().leftCompleted)
                {
                    st.pop();
                }
                else
                {
                    st.top().leftCompleted = true;
                }
            }
            else
            {
                if (st.empty())
                {
                    st.push({i, false, false});
                }
                else if (st.top().leftCompleted)
                {
                    st.pop();
                    st.push({i, false, false});
                }
                else
                {
                    st.top().leftCompleted = true;
                    st.push({i, false, false});
                }
            }
        }
        return st.empty();
    }
};

vector<string> helper(string str){
    string temp = string();
    vector<string> vect;
    for(int i=0; i<str.size(); i++){
        if(str[i] == ','){
            vect.push_back(temp);
            temp = string();
        }else{
            temp.push_back(str[i]);
        }
    }
    vect.push_back(temp);
    return vect;
}

int main(){
    string str = "sdfa,sdfa,dsfas,sdfa";
    vector<string> vect = helper(str);
    for(auto i: vect){
        cout<<i<<endl;
    }
}
