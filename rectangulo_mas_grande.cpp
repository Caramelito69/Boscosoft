#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(a,b) for(int i=a;i<b;i++)
#define enld '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll a;cin>>a;
    cout<<ll(a/4)*(ll(a/2)-ll(a/4));
}
signed main()
{
    INI
    solve1();
}

