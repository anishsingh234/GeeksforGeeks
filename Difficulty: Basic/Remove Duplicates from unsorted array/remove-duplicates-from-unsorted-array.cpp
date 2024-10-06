//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        vector<int> arr1(100000+1,0);
        vector<int> ans;
        for(int i=0; i<arr.size(); i++){
            arr1[arr[i]]++;
        }
        for(int i=0; i<arr.size(); i++){
            if(arr1[arr[i]]==1){
                ans.push_back(arr[i]);
            }
            else if(arr1[arr[i]]>0){
                ans.push_back(arr[i]);
                arr1[arr[i]]=0;
            }
        }
        return ans;
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
        vector<int> ans = obj.removeDuplicate(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends