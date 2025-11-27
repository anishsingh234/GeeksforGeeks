class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int low=0,medium=0;
        int high=arr.size()-1;
        while(medium<=high){
            if(arr[medium]==0){
                swap(arr[medium],arr[low]);
                low++;
                medium++;
            }
            else if(arr[medium]==1){
                medium++;
            }
            else{
                swap(arr[medium],arr[high]);
                high--;
            }
        }
        
    }
};