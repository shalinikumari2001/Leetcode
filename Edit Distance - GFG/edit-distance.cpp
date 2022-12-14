//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solve(int n,int m,string s,string t,vector<vector<int>>&dp) {
      
      for(int i=0;i<n+1;i++)
      {
          for(int j=0;j<m+1;j++)
          {
              if(i==0)
              {
                  dp[i][j]=j;
              }
              else if(j==0)
             { dp[i][j]=i;
          }
      }
      }
      for(int i=1;i<n+1;i++)
      {
          for(int j=1;j<m+1;j++)
          {
              if(s[i-1]==t[j-1])
              {
                  dp[i][j]=dp[i-1][j-1];
              }
              else
                  {
                      dp[i][j]=min(1+dp[i][j-1],min(1+dp[i-1][j],1+dp[i-1][j-1]));
                  }
          }
      }
      return dp[n][m];
    }
    int editDistance(string s,string t){
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        return solve(n,m,s,t,dp);
    }
      // Code here
    
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends