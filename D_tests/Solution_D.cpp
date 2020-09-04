#include <iostream>
#include <cstdio>
#include <vector>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MX 11111
#define ll long long
using namespace std;

    int n, m, a[MX];
    const ll mod = 1e9 + 7;

    typedef pair<int,int> pii;

    vector<int> g[MX];
    bool u[MX], u1[MX];
    int c, tin[MX], fup[MX], mx = -1;

    ll pw[1111], mn = mod * 4;

    pii bridge;

    int dfs1(int v, int p, ll num = 0){

        u1[v] = true;
        num = (num + pw[a[v]]) % mod;

        for(int i=0; i < g[v].size(); i++){
            int to = g[v][i];
            if( !u1[to] && to != p ){
                dfs1(to, p, num);
            }
        }

        return num;

    }

    void dfs (int v, int p = -1) {
        u[v] = true;
        c++;
        tin[v] = c;
        fup[v] = c;

        for (size_t i=0; i<g[v].size(); ++i) {
            int to = g[v][i];
            if (to == p)  continue;
            if (u[to])
                fup[v] = min (fup[v], tin[to]);
            else {
                dfs (to, v);
                fup[v] = min (fup[v], fup[to]);
                if (fup[to] > tin[v]){


                    for(int i=1; i<=n; i++)
                        u1[i] = false;

                    int aa = dfs1(v,to);

                    for(int i=1; i<=n; i++)
                        u1[i] = false;

                    int bb = dfs1(to, v);
                    int dif = abs(aa - bb);
             //       cout << aa << ' ' << bb << ' ' << dif << endl;
                    if( dif < mn ){
                        mn = dif;
                        bridge = mp( min(v,to), max(v,to) );
                    }
                    else if( dif == mn ){
                        if( mp( min(v,to), max(v,to)) < bridge ){
                            mn = dif;
                            bridge = mp( min(v,to), max(v,to) );
                        }
                    }
                }
            }
        }
    }

int main(){

    pw[0] = 1;
    for(int i=1; i<=1000; i++){
        pw[i] = (pw[i-1] * 3) % mod;
    }

    bridge = mp(-1, -1);

    cin >> n >> m;

    for(int i=0; i<=n; i++){
        g[i].clear();
        fup[i] = tin[i] = 0;
        u[i] = u1[i] = 0;
    }
    c = 0;
    mx = -1;
    mn = mod * 4;


    for(int i=1; i<=n; i++){
        cin >> a[i];
    //    cout << a[i] << '\n';
    }

    for(int i=1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        g[v].pb(u);
        g[u].pb(v);
    }

    for (int i=1; i<=n; ++i)
        if (!u[i])
            dfs (i);

    if( bridge == mp(-1,-1) )
        cout << "Impossible!";
    else
        cout << bridge.fr << " " << bridge.sc;

    return 0;
}
