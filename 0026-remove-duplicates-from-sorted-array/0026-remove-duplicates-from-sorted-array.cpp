class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==curr){
                nums.erase(nums.begin() + i-1);
                i--;
            }
            else{
                curr=nums[i];
                count++;
            }
        }
        return count;

        
    }
};