class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       map<int,int>mp;
       for(int i=0;i<nums1.size();i++){
        int j=0;
        while(j<nums2.size()){
            if(nums1[i]==nums2[j]){
                mp[nums1[i]]++;
                break;
            }
            j++;

        }
       }
       vector<int>ans;
       for(auto i : mp){
        ans.push_back(i.first);
       }
        return ans;
    }
};