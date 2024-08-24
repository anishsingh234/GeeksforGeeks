class Solution {
public:
    int gcd(int a,int b){
        if(b==0 ||a==b){
            return a;
        }
        if(a==0 ){
            return b;
        }
        if(a>b){
            return gcd(a-b,a);
        }
        return gcd(a,b-a);  
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[nums.size()-1]);
    }
};