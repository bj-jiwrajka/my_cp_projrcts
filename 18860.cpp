// JAI SHREE GANESH
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
    ll a;       \
    cin >> a;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if(n<=6 or n==9)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if (n % 3)
        {
            cout<<"YES"<<endl;
            cout << 1 << " " << 2 << " " << n - 3<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<4<<" "<<n-5<<endl;
        }
    }
}