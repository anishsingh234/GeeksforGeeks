//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool check(vector<int>& arr1, vector<int>& arr2) {
        // code here
        long long sum1=0,sum2=0;
        if(arr1.size()!=arr2.size()){
            return false;
        }
        for(int i=0; i<arr1.size(); i++){
            sum1+=arr1[i];
        }
        for(int i=0; i<arr2.size(); i++){
            sum2+=arr2[i];
        }
        // cout<<sum1<<" ";
        // cout<<sum2<<" ";
        if(sum1==sum2){
            return true;
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr1, arr2;
        string input1, input2;

        getline(cin, input1); // Read the entire line for the first array elements
        stringstream ss1(input1);
        int number;
        while (ss1 >> number) {
            arr1.push_back(number);
        }

        getline(cin, input2); // Read the entire line for the second array elements
        stringstream ss2(input2);
        while (ss2 >> number) {
            arr2.push_back(number);
        }

        Solution ob;
        cout << (ob.check(arr1, arr2) ? "true" : "false") << "\n";
    }
    return 0;
}
// } Driver Code Ends