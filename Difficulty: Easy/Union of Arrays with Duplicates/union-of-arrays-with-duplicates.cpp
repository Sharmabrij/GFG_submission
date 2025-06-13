class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set <int> s;
        int n = a.size();
        int m = b.size();
        
        for(int i =0;i<m;i++){
                s.insert(b[i]);
        }
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        return s.size();
       
    }
};