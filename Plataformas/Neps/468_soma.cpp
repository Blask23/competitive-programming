// Problema: 468 - Soma (OBI 2019)
// Plataforma: Neps academy
// Categoria:
// Origem: OBI 2019
// Link: https://neps.academy/br/exercise/468
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    ll n, k, cnt = 0;
    cin >> n >> k;

    vector<ll> vet(n), pref(n+1);
    map<ll, ll> pref_cnt;

    for (size_t i = 0; i < n; i++)
    {
        cin >> vet[i];
        pref[i+1] = pref[i] + vet[i];
    }
    
    for (size_t i = 0; i <= n; i++)
    {
        cnt += pref_cnt[pref[i] -k];
        pref_cnt[pref[i]] +=1;
    }
    
    cout << cnt << '\n';

    return 0;
}