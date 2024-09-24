//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int sumOfPowers(int a, int b){
       vector<int> primeFactorPowers(b + 1, 0);
       for (int i = 2; i <= b; ++i) {
            if (primeFactorPowers[i] == 0) { 
                for (int j = i; j <= b; j += i) {
                    int num = j;
                    int count = 0;
                   while (num % i == 0) {
                      num /= i;
                      count++;
                   }
                   primeFactorPowers[j] += count;
                }
            }
        }
        int totalPoints = 0;
        for (int i = a; i <= b; ++i) {
             totalPoints += primeFactorPowers[i];
        }
        return totalPoints;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends