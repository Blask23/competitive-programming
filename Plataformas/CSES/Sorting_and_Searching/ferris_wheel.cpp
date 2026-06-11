// Problema: 1090 - Ferris Wheel
// Plataforma: CSES
// Categoria:
// Origem:
// Link:
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n, x;
    cin >> n >> x;

    vector<int>p(n);

    for (size_t i = 0; i < n; i++)
        cin >> p[i];
    
    sort(all(p));

    int l = 0, r = n-1;
    int ans = 0;
    while (l<r)
    {
        if(p[l] + p[r] <= x){
            ans++;
            l++;
            r--;
        }else if(p[l]+p[r] > x){
            ans++;
            r--;
        }

        if(l==r){
            ans++;
        }
    }

    cout << ans << '\n';
    
    

    return 0;
}