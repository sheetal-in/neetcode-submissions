class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
 vector<pair<int, int>> v(mp.begin(), mp.end());
sort(v.begin(), v.end(), [](auto &a, auto &b) {
    return a.second > b.second;
    });
    vector<int>res;
    for(int i=0;i<v.size();i++){
        if(k>0){
            res.push_back(v[i].first);
        }
        k--;
    }
    return res;
    }
};
