//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int n=v.size();
		    sort(v.begin(),v.end());
		    if(n%2==0){
		        int b=n/2;
		        int sum=v[b]+v[b-1];
		        return ceil(sum/2);
		    }
		    else{
		        int m=(ceil(n/2));
		        return v[m];
		    }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends