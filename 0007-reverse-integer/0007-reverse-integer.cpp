class Solution {
public:
    int reverse(int x) {
        int temp=x;
        int ans=temp%10;
        temp=temp/10;
        int c;

        while(temp!=0){
            c=temp%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            ans=ans*10+c;
            temp=temp/10;

        }
        return ans;
        
    }
};