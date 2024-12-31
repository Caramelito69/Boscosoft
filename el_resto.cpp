#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define fore(a,b) for(int i=a;i<b;i++)
#define query int n;cin>>n;while(n--)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    string cad;
    cin>>cad;
    ull s=0;
    fore(0,cad.size())
        s+=(cad[i]-'0');
    cout<<(s<<(cad.size()-1))%9;
}
int main()
{
    INI
    solve();
}

