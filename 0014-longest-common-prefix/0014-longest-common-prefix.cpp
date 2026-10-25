// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//      string s="";
//      int l=strs.size();
     
//      int p=0;
//       while(p<=strs[0].length()){
//         int i=0;
//         char c=strs[0][p]; 
//         while(i<l && p<strs[i].length()){
//             if(c==strs[i][p]){
//                 if(i==l-1){
//                 s.push_back(c);
//                 }
//                 i++;
//             }
//             else{
//                 return s;
//             } 
                  
//         }
//         p++;

//     }
//     return s;
// }
// };
class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};