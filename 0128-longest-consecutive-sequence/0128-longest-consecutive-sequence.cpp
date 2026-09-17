class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        int c=0;
        int max=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i+1);
                i--;
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                c++;
                if(max<c){
                    max=c;
                }
            }
            else{
                c=0;
            }
        }
        return max+1;
        
    }
};