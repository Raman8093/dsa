class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l,r;
        int ll=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                l=i-1;
                r=i;
                break;
            }
            else if(i-1==0){
                reverse(nums.begin(),nums.end());
                return;
            }

        }
        for(int i=nums.size()-1;i>l;i--){
            if(nums[i]>nums[l]){
                swap(nums[i],nums[l]);
                l++;
                break;
            }
            
        }
        // if(l==0&&r==nums.size()-1){
        //     reverse(nums.begin(),nums.end());
        //     return;
        // }
        // for(int i=l+1;i<nums.size();i++){
        
        sort(nums.begin()+l,nums.end());


        // }
        
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

        // next_permutation(nums.begin(),nums.end());



    }
};