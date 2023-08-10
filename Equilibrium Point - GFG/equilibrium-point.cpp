//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1)
        return 1;
        int left=0;
        int right=0;
        int i=0;
        int j=n-1;
        while(i<j){
            if(left<right){
                left+=a[i];
                i++;
            }
            else
            {
                right+=a[j];
                j--;
            }
            
            
            
            
        }
        if(left==0 && right==0)
        return 1;
        else if(i==j && right==left)
        return i+1;
        else
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends