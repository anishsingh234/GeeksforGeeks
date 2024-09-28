//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  public:
    bool palindrome(int a){
        int num=a;
        int sum=0;
        while(a>0){
            sum=sum*10+ a%10;
            a=a/10;
        }
        if(sum==num){
            return true;
        }
        return false;
    }
    bool PalinArray(vector<int> &arr) {
       bool ans;
       for(int i=0; i<arr.size(); i++){
           ans=palindrome(arr[i]);
           if(ans==false){
               return ans;
           }
       }
       return ans;
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