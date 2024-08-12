class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int in;
        int max_it=*max_element(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if((2*nums[i])>max_it && nums[i]!=max_it){
                return -1;
            }
            if(nums[i]==max_it) in=i;
        }
        return in; 
    }
};