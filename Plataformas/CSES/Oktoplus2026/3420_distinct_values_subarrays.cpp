#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n;
    cin >> n;

    vector<int> x(n);

    for (int i = 0; i < n; i++)
        cin >> x[i];

    int p1 = 0, p2 = 0; ll ans = 0;
    map<int,int> mp;

    while (p2 < n)
    {
        mp[x[p2]]++;

       while (mp[x[p2]] > 1)
        {
            mp[x[p1]]--;
            p1++;
        }

        ans += p2-p1+1;
        p2++;
    }
    
    
    cout << ans << '\n';
    

    return 0;
}