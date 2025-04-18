//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    bool searchKey(int n, struct Node* head, int key) {
        int i=0;
        while(i<n){
            if(head->data==key){
                return true;
            }
            head=head->next;
            i++;
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i) {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        int key;
        cin >> key;
        Solution ob;
        cout << ob.searchKey(n, head, key) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends