//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int sieveOfEratosthenes(long long L, long long R)
    {
        // Finding primes up to sqrt(R)
        long long limit = sqrt(R);
        vector<bool> sieve(limit + 1, true);
        sieve[0] = sieve[1] = false;
        
        // Sieve of Eratosthenes to mark non-prime numbers
        for (long long i = 2; i * i <= limit; i++) {
            if (sieve[i]) {
                for (long long j = i * i; j <= limit; j += i) {
                    sieve[j] = false;
                }
            }
        }
        
        int count = 0;
        for (long long i = 2; i <= limit; i++) {
            if (sieve[i]) {
                long long square = i * i;
                if (square >= L && square <= R) {
                    count++;
                }
            }
        }
        
        return count;
    }

    int count3DivNums(long long L, long long R) {
        return sieveOfEratosthenes(L, R);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long L,R;
        
        cin>>L>>R;

        Solution ob;
        cout << ob.count3DivNums(L,R) << endl;
    }
    return 0;
}
// } Driver Code Ends