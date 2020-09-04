#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;

    const ll N = 11111;

    ll n, k, x;
    ll a[N], d[N];

int main(){

    freopen("b.in", "r", stdin);
    freopen("b.out", "w", stdout);

    cin >> n >> k >> x;

    for(int i=1; i<=n; i++){
        cin >> a[i];
        d[i] = N; // assigning "infinite" value
    }

    d[1] = 0;
    for(int i=2; i<=n; i++){
        for(int j=i-1; j>=max(0ll,i-k); j--){
            if( abs( a[i]-a[j] ) <= x )
                d[i] = min( d[j]+1, d[i] );
        }
    }

    if( d[n] == 11111 )
        cout << -1;
    else
        cout << d[n];

    return 0;
}

