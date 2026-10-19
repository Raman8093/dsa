class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            auto it=mp.find(target-nums[i]);
            if(it != mp.end()){
                a.push_back(i);
                a.push_back(it->second);
                break;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return a;
        
    }
};