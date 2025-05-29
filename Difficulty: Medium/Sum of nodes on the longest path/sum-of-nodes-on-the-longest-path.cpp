/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
  
     int finSum = 0;
     int finLen = 0;
    
    
    void solve(Node* root,int sum,int len){
        
        if(root==NULL){
            return ;
        }
        
        sum += root->data;
        
        if(!root->left && !root->right){
            
            if(len>finLen){
            finSum = sum;
            finLen = len;
            }
            else if(len==finLen){
                finSum = max(finSum,sum);
            }   
            return;
        
        }
        
        if(root->left){
        solve(root->left,sum,len+1);
        }
        if(root->right){
        solve(root->right,sum,len+1);
        }
        
    }
    
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        int len = 0;
        solve(root,0,len);
        return finSum;
        
    }
};