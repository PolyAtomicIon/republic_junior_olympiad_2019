#include <bits/stdc++.h>
using namespace std;
int dp[10002][10003];
int main() {
/*
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);
*/
    int n,x,k;
    cin>>n>>k>>x;
    int a[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int INF=1e9+7;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=INF;
        }
    }
    dp[0][0]=0;
    int ans=1000000000;
    for(int l=0;l<n;l++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           // for(int l=0;l<k;l++){
                if(abs(a[i]-a[j])<=x){
                    dp[i][j]=min(dp[i][j],dp[i][l]+dp[l][j]);
                }
                ans=min(ans,dp[i][j]);
        }
          //  }
        }

}
        cout<<ans;
    return 0;
    }
