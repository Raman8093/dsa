class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        vector<int>a;
        int s=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                p.push_back(nums[i]);
            }
            else{
                n.push_back(nums[i]);
            }
        }
        for(int i=0;i<s;i++){
            if(i%2==0){
            a.push_back(p[i/2]);
            }
            else{
            a.push_back(n[(i-1)/2]);
            }
            
        }
        return a;
        
    }
};