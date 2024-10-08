//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
       sort(arr.begin(),arr.end());
        int ceil=-1;
        int floor=-1;
        int low=0;
        int high=arr.size()-1; 
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==x){
                floor=arr[mid];
                ceil=arr[mid];
                return {floor,ceil};
            }
            else if(arr[mid]>x){
                ceil=arr[mid];
                high=mid-1;
            }
            else{
                floor=arr[mid];
                low=mid+1;
            }

        }
        return {floor,ceil};
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
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends