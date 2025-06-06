// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
         int min=INT_MAX;
         int max=INT_MIN;
         
         for(int i=0; i<arr.size(); i++){
             if(arr[i]<min){
                 min=arr[i];
             }
             if(arr[i]>max){
                 max=arr[i];
             }
         }
         return {min,max};
        
    }
};