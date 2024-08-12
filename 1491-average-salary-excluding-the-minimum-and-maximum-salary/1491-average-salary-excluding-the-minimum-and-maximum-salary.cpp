class Solution {
public:
    double average(vector<int>& arr) {
        double count=0;
        double sum=0;
        int min_it=*min_element(arr.begin(),arr.end());
        int max_it=*max_element(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++){
            if(arr[i]!=min_it && arr[i]!=max_it){
                sum+=arr[i];
                count++;
            }
        }
        double i=sum/count;
        return i;
    }
};