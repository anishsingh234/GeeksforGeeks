//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        vector<int> myVector;
        vector<int> myVector2;
        for(int i=0; i<n; i++){
            if(arr[i]>=0){
                myVector.push_back(arr[i]);
            }else{
                myVector2.push_back(arr[i]);
            }
        }
        for(int i=0; i<myVector.size(); i++){
            arr[i]=myVector[i];
        }
        int i=0;
        for(int j=myVector.size(); j<n; j++){
            arr[j]=myVector2[i];
            i++;
        }
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends