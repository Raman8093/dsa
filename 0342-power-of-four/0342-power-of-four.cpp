class Solution {
public:
    // bool check(int n){
    //     if(n==4){
    //         return true;
    //     }                
    // }
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        float a=n;
        while(a>4){
            a=a/4.00;
        }         
        if(a==4){
            return true;
        }    
        return false;

    }
};