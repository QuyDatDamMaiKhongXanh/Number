#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bieuDien2(ll n , ll p)
{
    ll ans = 0;
    for(ll i = p ; i <= n ; i *= p)
    {
        ans += n / i;
    }
    return ans;
}
int main()
{
    ll n , p ; cin >> n >> p;
    cout << bieuDien2(n , p);
    return 0;
}
