//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        stack<char> st;
        string k="",g="";
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='.'){
                while(!st.empty()){
                    g+=st.top();
                   
                    st.pop();
                }
                 g+='.';
            }
            else
            
            st.push(s[i]);
            
            
        }
       
   while(!st.empty()){
       g+=st.top();
       st.pop();
   }
        return g;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends