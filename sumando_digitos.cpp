#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(a,b) for(int i=a;i<b;i++)
#define endl '\n'
typedef long long ll;
typedef int in;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    ll a;cin>>a;
    ll clon=a;
    in c=0,d=10;
    do
    {
        clon=((clon%10)*10)+((in(clon/10)+clon%10)%10),c++;
    }while(clon!=a);
    cout<<c;
}
signed main()
{
    INI solve();
}
