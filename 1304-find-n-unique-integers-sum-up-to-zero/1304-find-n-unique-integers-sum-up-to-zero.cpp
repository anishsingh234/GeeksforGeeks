class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> arr;
        int ans=0;
        if(n==1){
           arr.push_back(0);
           return arr; 
        }
        if(n==2){
           arr.push_back(-1);
           arr.push_back(1);
           return arr; 
        }
        for(int i=0; i<n-1; i++){
            arr.push_back(i);
            ans+=i;
        }
        arr.push_back(ans*-1);
        return arr;
    
    }
};