class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     string s="";
     int l=strs.size();
     
     int p=0;
      while(p<=strs[0].length()){
        int i=0;
        char c=strs[0][p]; 
        while(i<l && p<strs[i].length()){
            if(c==strs[i][p]){
                if(i==l-1){
                s.push_back(c);
                }
                i++;
            }
            else{
                return s;
            } 
                  
        }
        p++;

    }
    return s;
}
};
// p<=strs[i].lenght() && p<strs[0].lenght() && i<l && strs[0][p]=strs[i][p]