//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isPrime(int a) {
        if (a < 2) {
            return false;
        }
        for (int i = 2; i <= sqrt(a); i++) {
            if (a % i == 0) {
                return false;
            }
        }
        return true;
    }

    int maxDigit(int L, int R) {
        vector<int> a(10, 0); // To count frequency of each digit
        int maxPrime = -1; // To track the maximum prime
        for (int i = L; i <= R; i++) {
            if (isPrime(i)) {
                int temp = i;
                maxPrime = max(maxPrime, i); // Update maxPrime
                // Count digits of prime number
                while (temp > 0) {
                    int digit = temp % 10;
                    a[digit]++;
                    temp = temp / 10;
                }
            }
        }
        // If no prime is found, return -1
        if (maxPrime == -1) {
            return -1;
        }

        int result = -1;
        int maxCount = -1;
        // Find the digit with the highest frequency
        for (int i = 0; i < 10; i++) {
            if (a[i] > maxCount) {
                maxCount = a[i];
                result = i;
            } else if (a[i] == maxCount) {
                // If the frequency is the same, choose the larger digit
                result = max(result, i);
            }
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.maxDigit(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends