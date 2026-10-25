class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int in=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                in=i+1;
            }
            else{
                break;
            }

        }
        int sum=0;
        for(int i=0;i<=in;i++){
            sum=sum+nums[i];
        }
        for(int i=in;i<nums.size();i++){
            if(nums[i]==sum){
                i=in;
                sum++;
            }             

        }
        return sum;        
    }
};