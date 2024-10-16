//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int subarraysum(vector<int>& arr,int x,int m){
        int sum=0;
        for(int i=0; i<m; i++){
            sum+=arr[i];
        }
        for(int i=m; i<arr.size(); i++){
            if(sum>x){
                return 1;
            }
            sum-=arr[i-m];
            sum+=arr[i];
        }
        if(sum>x){
            return 1;
        }
        return 0;
    }
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        int l=1,r=n;
        while(l<=r){
            int m=(l+r)/2;
            if(subarraysum(arr,x,m)==0){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        if(l==n+1){
            return 0;
        }
        return l;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        vector<int> arr;
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << endl;
    }

    return 0;
}
// } Driver Code Ends