//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr,arr+N);
        string ans="";
        string f=arr[0];
        string l=arr[N-1];
        for(int i=0;i<f.size();i++){
            if(f[i]==l[i])
            {
                ans+=f[i];
            }
            else
            {
                break;
            }
            
        }
        if(ans.size()==0)
        
        {
            return "-1";
            
        }
        else
        {
            return ans;
        }
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends