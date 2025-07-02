class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int sum=0;
        int maxLen=0;
        map<int,int>preSumMap;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum==k){
                maxLen=max(maxLen,i+1);
            }
            int rem=sum-k;
            if(preSumMap.find(rem)!=preSumMap.end()){
                int len=i-preSumMap[rem];
                maxLen=max(maxLen,len);
            }
            if(preSumMap.find(sum)==preSumMap.end()){
                preSumMap[sum]=i;
            }
        }
        return maxLen;
    }
};