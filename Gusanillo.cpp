#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(a,b) for(int i=a;i<=b;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll a,b,c,d=0,i=0;cin>>a>>b>>c;
    while(i<a)
    {
        if(i%c==0)
            d++;
        i+=b;
    }
    cout<<d;
}
signed main()
{
    INI solve();
}
