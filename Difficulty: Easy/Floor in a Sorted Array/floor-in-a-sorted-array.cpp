//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {
        long long l=0;
        long long h=n-1;
        long long floorIndex = -1;
        if(x==0){
            return -1;
        }
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(v[mid]<=x){
                floorIndex = mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return floorIndex;
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends