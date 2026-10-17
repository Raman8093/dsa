class Solution {
public:

    void sort(vector<int>& num,int l,int r){
        
        if(l>=r){
            return;
        }
        int mid=(l+r)/2;
            sort(num,l,mid);
            sort(num,mid+1,r);

        vector<int>temp;
        int i=l;
        int j=mid+1;
        while(i<=mid && j<=r){
        if(i<=mid && j<=r && num[i]<num[j] ){
            temp.push_back(num[i]);
            i++;
        }
        else if(j<=r){
            temp.push_back(num[j]);
            j++;
        }
        }
        while(i<=mid){
            temp.push_back(num[i]);
            i++;
        }
        while(j<=r){
            temp.push_back(num[j]);
            j++;
        }
        int t=0;
        for(int h=l;h<=r;h++){
            num[h]=temp[t];
            t++;
        }
        
      

    }
    vector<int> sortArray(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        sort(nums,l,r);        
        return nums;
        
    }
};