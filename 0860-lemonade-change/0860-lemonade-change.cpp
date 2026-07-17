class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        stack<int>f;
        stack<int>t;
        stack<int>tw;
        
        for(int i=0;i<bills.size();i++){
            int j=0;
            if(bills[i]==5){
                f.push(5);
            }
            else if(bills[i]==10 && !f.empty()){
                t.push(10);
                f.pop();
            }
            else if(bills[i]==20){
                tw.push(20);
               if(!t.empty()&& !f.empty()){
                t.pop();
                f.pop();
               }
               else{
                while(!f.empty() && j<3){
                    f.pop();
                    j++;
                }
                if(j!=3){
                return false;
               }
               }
              
            }
            else{
                return false;
            }
        }
        return true;

    }
};