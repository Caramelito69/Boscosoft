#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(a,b) for(int i=a;i<=b;i++)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void solve()
{
    string cad;
    getline(cin, cad);
    long long s = 0, cont = 0;
    long long num = 0;
    bool isNegative = false;
    fore(0,cad.size()) {
        if (i < cad.size() && cad[i] == '-') {
            isNegative = true;
        } else if (i < cad.size() && isdigit(cad[i])) {
            num = num * 10 + (cad[i] - '0');
        } else if (i == cad.size() || cad[i] == ',') {
            if (isNegative)
                num = -num;
            s += num;
            cont++;
            num = 0;
            isNegative = false;
        }
    }
    double f=((9.5*cont)-s);
    if (f<0)
        cout<<0;
    else
        cout<<f*2;
    cout<<endl;
}
int main() {
    INI
    solve();
}

