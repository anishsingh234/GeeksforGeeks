class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        map<int,int>mp;
        vector<int>arr;
        for(int i=0; i<a.size(); i++){
            mp[a[i]]++;
        }
         for(int i=0; i<b.size(); i++){
             mp[b[i]]++;
        }
        for(auto &pr:mp){
            arr.push_back(pr.first);
        }
        return arr;
    }
};