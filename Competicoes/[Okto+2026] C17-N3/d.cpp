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

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));

    int ans=1;
    int qtd = 0;
    int p = 0;

    for (size_t i = 0; i < n; i++)
    {
        while ( p < n && abs(a[i] - a[p]) <= 5)
        {
            qtd++;
            p++;
        }
        ans = max(ans, qtd);
        qtd--;
    }
    cout << ans << '\n';



    return 0;
}