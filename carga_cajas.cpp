#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(a,b) for(int i=a;i<b;i++)
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll A,B,C,a,b,c;cin>>A>>B>>C>>a>>b>>c;
    ll s1=(A/a)*(B/b)*(C/c);
    ll s2=(A/b)*(B/a)*(C/c);
    ll s3=(A/c)*(B/a)*(C/b);
    ll s4=(A/c)*(B/b)*(C/a);
    ll s5=(A/b)*(B/c)*(C/a);
    ll s6=(A/a)*(B/c)*(C/b);
    cout<<max(s1,max(s2,max(s3,max(s4,max(s5,s6)))));
}
signed main()
{
    INI solve();
}

