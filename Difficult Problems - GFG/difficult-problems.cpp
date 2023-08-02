//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  void help(string &k,int i,int &in,int &dc){
      if(i==k.size()-1){
      return ;
  }
  if(k[i]<=k[i+1])
  { in++;
      
  }
 if(k[i]>=k[i+1])
 {
     dc++;
 }
  help(k,i+1,in,dc);}
  
    int difProblem(string N) {
        // code here
        int in=0,dc=0;
        help(N,0,in,dc);
        if(in==N.size()-1 || dc==N.size()-1)
        return 1;
        else
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.difProblem(N) << endl;
    }
    return 0;
}
// } Driver Code Ends