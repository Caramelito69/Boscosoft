#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define endl '\n'
#define fore(a,b) for(int i=a;i<=b;i++)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
bool ver(ll men,ll may)
{
    return ((may>=men*2 && may<=men*10) || (men>=may*2 && men<=may*10));
}
void solve()
{
    ll men,may;cin>>men>>may;
    int n,c=0;cin>>n;int vec[n];
    fore(0,n-1)cin>>vec[i];
    fore(men,may)
    {
        int j;
        for(j=0;!ver(vec[j],i) && j<n;j++);
        if(j==n)
            c++;
    }
    cout<<c;
}
signed main()
{
    INI solve();
}
