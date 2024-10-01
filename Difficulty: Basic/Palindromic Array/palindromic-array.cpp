//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  public:
    int check(int n){
        int sum=0;
        int m=n;
        while(n>0){
            sum=(sum*10)+n%10;
            n=n/10;
        }
        if(m!=sum){
            return false;
        }
        return true;
    }
    bool PalinArray(vector<int> &arr) {
        // code here
        for(int i=0 ; i<arr.size(); i++){
            if(!check(arr[i])){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << (ob.PalinArray(arr) ? "true" : "false") << endl;
    }

    return 0;
}

// } Driver Code Ends