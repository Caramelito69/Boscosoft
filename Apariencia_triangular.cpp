//    *
//    * *
//    *  *
//    *   *
//    *    *
//    *     *
//    *      *
//    *       *
//    *        *
//    *         *
//    *          *
//    * * * * * * *
// Patron escondido:
//  0 1 -> SI
//  2 2 -> SI
//  4 3 -> SI
//  6 4 -> SI
//  8 5 -> SI
//  10 6 -> SI
//  12 7 -> SI
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
    ll a,b;cin>>a>>b;
    if((a+2)/2==b)cout<<"Si posible";
    else cout<<"No posible";
}
signed main()
{
    INI solve();
}

