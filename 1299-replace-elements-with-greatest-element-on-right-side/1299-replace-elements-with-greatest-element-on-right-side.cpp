class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int max=INT_MIN;
        int min=-1;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>max){
                max=arr[i];
                arr[i]=min; 
                min=max;                           
            }
            else{
                arr[i]=max;
                min=max;
            }
            
            }
            return arr;
        }
        
};