//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int m=str.length();
        int sum=0;
        int i=0;
        int ab=1;
        reverse(str.begin(),str.end());
        while(i<m){
            int ab=pow(2,i);
            if(str[i]=='0'){
                sum=sum+0*ab;
            }else{
                sum=sum+1*ab;
            }
            i++;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends