//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int isPanagram(string s)
	{
	    vector<int>arr(26,0);
        int count=0;
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        for(char &ch : s) {
          if(isalpha(ch)) {  
             char lowerCh = tolower(ch);  
             int index = int(lowerCh - 'a');
             if(arr[index] == 0) {
                arr[index]++;
                count++;
              }
            }  
        }
        if(count==26)
           return 1;
       return 0;
        
    }
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		cout << ob.isPanagram(s) << "\n";
   	
cout << "~" << "\n";
}

    return 0;
}
// } Driver Code Ends