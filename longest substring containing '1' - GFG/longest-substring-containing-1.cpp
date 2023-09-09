//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}

// } Driver Code Ends


int maxlength( string s)
{
// your code here
int maxi=INT_MIN,c=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='1')
    c++;
    else
    {
        maxi=max(c,maxi);
        c=0;
    }
}
maxi=max(maxi,c);
return maxi;
}