class Solution {
  public:
    void rearrange(vector<int> &arr, int x) {
        // code here
        // stable_sort(arr.begin(), arr.end(), [x](int a, int b){
        //   return abs(a-x)<abs(b-x); 
        // });
        // return;
        
        map<int,vector<int>>mp;
        for(auto it:arr){
            mp[abs(it-x)].push_back(it);
        }
        int i=0;
        for(auto it:mp){
            for(auto j:it.second){
                arr[i]=j;
                i++;
            }
        }
        return;
    }
};
