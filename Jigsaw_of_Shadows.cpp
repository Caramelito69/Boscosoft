#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define query int casos;cin>>casos;while(casos--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define M_PI 3.14159265358979323846
typedef long long ll;
using namespace std;
void solve()
{
        double d;
        int n;cin>>d>>n;
        //d=tan(d * ( M_PI/ 180.0));
        vector<pair<double,double>>vec;
        double a = -tan(d*acos(-1)/180);
        while(n--){
            int x,h; cin>>x>>h;
            double b=1.*h - a*x;
            double l=x, r=-b/a;
            vec.push_back({x,r});
        }
        sort(vec.begin(),vec.end());
        double s=0,may=-1e18;
        for(auto x:vec)
            may=max(may,x.first),s+=max(0.,x.second-may),may=max(may,x.second);
        cout<<fixed<<setprecision(10)<<s<<endl;
}
signed main()
{
    FIN; solve();
}
