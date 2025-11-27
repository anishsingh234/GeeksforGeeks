// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        reverse(arr.begin(),arr.begin()+n-1);
        reverse(arr.begin(),arr.end());
    }
};