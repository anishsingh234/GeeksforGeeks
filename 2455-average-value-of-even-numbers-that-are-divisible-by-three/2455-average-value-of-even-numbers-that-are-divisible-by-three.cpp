class Solution {
public:
    int averageValue(vector<int>& nums) {
        int avg=0;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                avg+=nums[i];
                count++;
            }
        }
        if(avg==0){
            return 0;
        }
        return avg/count;
    }
};