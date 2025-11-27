class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i:arr){
            if(i>max){
                max=i;
            }
            if(i<min){
                min=i;
            }
        }
        return {min,max};
    }
};