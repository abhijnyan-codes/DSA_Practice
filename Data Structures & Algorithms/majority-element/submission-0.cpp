class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(auto x: nums){
            hash[x]++;
        }
        int freq=0;
        int ans=-1;
        for(auto p: hash){
            if(p.second>freq){
                freq=p.second;
                ans=p.first;
            }
        }
        return ans;
    }
};