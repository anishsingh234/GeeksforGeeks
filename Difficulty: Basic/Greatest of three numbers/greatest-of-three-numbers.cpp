//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int greatestOfThree(int a, int b, int c) {
        // code here
        int ab=a-b;
        int flag = (ab >> 31) & 1;
        int max_ab = a * (1 - flag) + (b * flag);
        
        int d=max_ab-c;
        flag = (d >> 31) & 1; 
        int ans = max_ab * (1 - flag) + (c * flag);;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.greatestOfThree(A, B, C) << "\n";
    }
}

// } Driver Code Ends