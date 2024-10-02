//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
  void rearrange(vector<int> &arr) {
        int j=0,k=0;
        int n = arr.size();
	    vector<int> positive;
	    vector<int> negative;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            positive.push_back(arr[i]);
	        }
	        else{
	            negative.push_back(arr[i]);
	        }
	    }
	    
	    int i=0;
	    while(i<n)
	    {
	        if(j<positive.size())
	        {
	            arr[i++] = positive[j++];
	        }
	        if(k<negative.size())
	        {
	            arr[i++] = negative[k++];
	        }
	    }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends