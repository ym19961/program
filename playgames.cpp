#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define mod 90001
#define INF 0x3f3f3f3f
#define maxn 300010
#define cle(a) memset(a,0,sizeof(a))
const ull inf = 1LL << 61;
const double eps=1e-5;
using namespace std;
ll a[maxn];
int main()
{
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++)cin>>a[i];
        if(n==1){
            cout<<a[1]<<endl;continue;
        }
        sort(a+1,a+1+n);
        ll ans=0;
        for(int i=1;i<=n;i++){
            ans+=(i+1)*a[i];
        }
        ans-=a[n];
        cout<<ans<<endl;
    }
    return 0;
}