//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string encode(string chars) {
         int n=chars.size();
        int i=0;
        int index=0;
        string s1="";
        while(i<n){
            char curr_char=chars[i];
            int count=0;
            while(i<n && curr_char==chars[i]){
                i++;
                count++;
            }
            s1+=curr_char;
            index++;
            string curr_str=to_string(count);
            s1+=curr_str;
            index++;
        }
        return s1;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        string s;
        getline(cin,s);
        
        Solution obj;
        string res = obj.encode(s);
        
        cout<<res<<"\n";
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends