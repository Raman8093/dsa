class Solution {
public:
// int sum(int s){
//     if(s==1){
//         return 1;
//     }
//     else if(s==2){
//         return 2;
//     }
// return sum(s-1,s-2);
// }
int climbStairs(int n) {
    int a=1;
    int b=2;
    int c=a+b;
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    for(int i=3;i<n;i++){
        a= b;
        b= c;
        c= a+b;
    }

    return c;    
}
};