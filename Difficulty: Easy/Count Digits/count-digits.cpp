//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
int count =0;
    int evenlyDivides(int N){
        int q,r;
        int dup =N;
        
        while(N>0){
            r=N%10;
            if( r!=0 && dup%r==0 ) count++;
            N=N/10;
            
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends