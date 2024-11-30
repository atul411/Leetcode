#include<bits/stdc++.h>
using namespace std;

class Twitter
{
    vector<pair<int, int>> tweets;
    unordered_map<int, set<int>> system;

public:
    Twitter()
    {
    }

    void postTweet(int userId, int tweetId)
    {
        tweets.push_back({userId, tweetId});
    }

    vector<int> getNewsFeed(int userId)
    {
        vector<int> lst;
        for(int i = tweets.size()-1, j=0; i>=0 and j<10; i--){
            auto tweet = tweets[i];
            if(tweet.first == userId or system[userId].count(tweet.first)){
                lst.push_back(tweet.second);
                j++;
            }
        }
        return lst;
    }

    void follow(int followerId, int followeeId)
    {
        system[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId)
    {
        system[followerId].erase(followeeId);
    }
};