class Solution {
  public:
    void sort012(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> temp;
        int count0 =0;
        int count1 =0;
        int count2 = 0;
        
        for(int i = 0; i<n;i++){
            if(arr[i]==0) count0++;
            else if(arr[i]==1) count1++;
            else{ 
                count2++;
            }
        }
        
        for(int i =0;i < count0;i++){
            temp.push_back(0);
        }
        for(int i =0;i < count1;i++){
            temp.push_back(1);
        }
        for(int i =0;i < count2;i++){
            temp.push_back(2);
        }
        for(int i = 0;i<n; i++){
            arr[i]= temp[i];
        }
    }
};