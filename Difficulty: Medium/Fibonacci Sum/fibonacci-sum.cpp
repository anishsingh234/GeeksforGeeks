//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N){
        long long int a=0,b=1,sum=1;
        int i=0;
        while(i<N-1){
           long long int temp=(a+b)%1000000007;
           a=b;
           b=temp;
           sum+=temp;
           i++;
        }
        return sum%1000000007;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends