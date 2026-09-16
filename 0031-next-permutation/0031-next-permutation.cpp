class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        
        // for(int i=nums.size()-1;i>0;i--){
        //     if(nums[i-1]<nums[i]){
        //         l=i-1;
        //         break;
        //     }
        // }
        // while(l<r){
        //     if(nums[l]<nums[r]){
        //         swap(nums[l],nums[r]);
        //         l++;
        //     }
        //     else{
        //         swap(nums[l],nums[r]);
        //         return;
        //     }
           
        // }
      
        // return;
        next_permutation(nums.begin(),nums.end());


    }
};