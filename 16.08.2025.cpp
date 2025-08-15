class Solution {
  public:
    static bool comp(string& a, string& b){
        return (a+b)>(b+a);
    }
  
    string findLargest(vector<int> &arr) {
        // code here
        vector<string>v;
        for(auto it:arr){
            v.push_back(to_string(it));
        }
        sort(v.begin(), v.end(), comp);
        
        if(v[0]=="0"){
            return "0";
        }
        
        string ans="";
        for(auto it: v){
            ans.append(it);
        }
        return ans;
        
    }
};
