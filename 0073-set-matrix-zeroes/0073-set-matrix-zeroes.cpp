class Solution {
public:
void markzero(vector<vector<int>>& matrix,vector<int>ans){
     for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(i==ans[0]|| j==ans[1]){
                    matrix[i][j]=0;
                }
            }
        }
}
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    ans.push_back({i,j});
                }
            }
        }

    
        for(int i=0;i<ans.size();i++){
               markzero(matrix,ans[i]);
            
        }

    }
};