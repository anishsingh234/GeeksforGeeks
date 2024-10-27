//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        int leftsum,rightsum=0;
        for(int i=0; i<arr.size(); i++){
            rightsum=sum-leftsum-arr[i];
            if(leftsum==rightsum){
                return "true";
            }
            leftsum+=arr[i];
        }
        return "false";
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        string res = obj.equilibrium(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends