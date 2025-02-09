//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        if(n==1)
           return "1";
        string result="";
        string s=lookandsay(n-1);
        for(int i=0;i<s.length(); i++){
            int count=1;
            while(i<s.length()-1 && s[i]==s[i+1]){
                count++;
                i++;
            }
            result+=to_string(count) +string(1,s[i]);
        }
        return result;
        
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends